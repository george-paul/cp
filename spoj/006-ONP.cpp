/*input
3
(a+(b*c))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))
*/
/*

*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

int precedence(char op)
{
	if(op=='^')
		return 3;
	else if(op=='/'||op=='*')
		return 2;
	else if(op=='+'||op=='-')
		return 1;
	else 
		return (-1);
}

void converToRPN(string exp)
{
	string res;
	stack <char> s;
	char temp;
	s.push('0');
	for(int i=0; i<exp.length(); i++)
	{
		if(isalpha(exp[i]))
		{

			res+=exp[i];
		}
		else if(exp[i]=='(')
			s.push(exp[i]);
		else if(exp[i]==')')
		{
			while(s.top()!='(')
			{
				temp=s.top();
				s.pop();
				res+=temp;
			}
			s.pop();
		}
		else
		{
			if(precedence(exp[i])<=precedence(s.top()))
			{
				while(precedence(exp[i])<=precedence(s.top()))
				{
					temp=s.top();
					res+=temp;
					s.pop();
				}
			}
			else
			{
				s.push(exp[i]);
			}
		}
	}
	while(s.top()!='0')
	{
		temp=s.top();
		res+=temp;
		s.pop();
	}
	cout<<res<<endl;
}

int main()
{
	string exp;
	int T;
	cin>>T;
	cin.ignore(); 
	for(;T>0;T--)
	{
		getline(cin, exp);
		converToRPN(exp);
	}
	return 0;
}