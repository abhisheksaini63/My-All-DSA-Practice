#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	string s;
	vector<char> p;
	char ch='(';
	getline(cin,s);
	s.push_back(')');
	int top=-1;
	char stack[10];
	stack[0]='(';
	top++;
	for(int j=0;top!=-1;j++)
	{
		char c=s[j];
		if(c>=65&&c<=90||c>=97&&c<=122)
		  {
		  	p.push_back(c);
		  }
		
		if(c<=56&&c>=48)
		 p.push_back(c);
		 
		if(c=='*'||c=='/')
		 {
		 	top++;
		 	stack[top]=c;
		 }
		 
		if(c=='(')
		  {
		  	top++;
		  	stack[top]=c;
		  }
		
		if(c=='+'||c=='-') 
		  {
		  	while(stack[top]=='*'||stack[top]=='/')
		  	   {
		  	   	p.push_back(stack[top]);
		  	   	top--;
				}
				
			top++;
			stack[top]=c;
		  }
		  
		  if(c==')')
		   {
		   	 while(stack[top]!='(')
		   	  {
		   	  	p.push_back(stack[top]);
		   	  top--;
				 }
				 top--;
		   }
	}
	
	for(int k=0;k<p.size();k++)
	cout<<p[k];
	return 0;
	
}
