#include<iostream>
using namespace std;
class stack
{
	public:
	char c;
	int data;
	stack *next;
};

stack *startQ=NULL;
stack *startP=NULL;

void pushQ(char c)
{
	stack *r,*t=new stack();
	t->c=c;
	t->next=NULL;
	if(startQ==NULL)
	startQ=t;
	else
	{
		r=startQ;
		startQ=t;
		t->next=r;
	}
}

void pushP(int c)
{
	stack *r,*t=new stack();
	t->data=c;
	t->next=NULL;
	if(startP==NULL)
	startP=t;
	else
	{
		r=startP;
		startP=t;
		t->next=r;
	}
}

char popQ()
{
	stack *t;
	char s;
	if(startQ==NULL)
	return '\0';
	else
	{
		t=startQ;
		startQ=t->next;
		s=t->c;
		delete(t);
		return s;
	}
}

int popP()
{
	stack *t;
	int s;
	if(startP==NULL)
	return 0;
	else
	{
		t=startP;
		startP=t->next;
		s=t->data;
		delete(t);
		return s;
	}
}

int main()
{
	string s;
	char pop;
	//stack *q=startQ;
	int a=0,b=0,c=0;
	cout<<"\nEnter the postfix expression =";
	cin>>s;
	pushQ(')');
	for(int i=s.length()-1;i>=0;i--)
	pushQ(s[i]);
	pop=popQ();
	while(pop!=')')
	{
		if(pop>=48&&pop<=57)
		{
			char r=pop;
			int w=r-'0';
			pushP(w);
		}
		else if(pop=='+')
		{
			a=popP();
			b=popP();
			c=b+a;
			pushP(c);
		}
		
		else if(pop=='-')
		{
			a=popP();
			b=popP();
			c=b-a;
			pushP(c);
		}
		
		else if(pop=='/')
		{
			a=popP();
			b=popP();
			c=b/a;
			pushP(c);
		}
		
		else if(pop=='*')
		{
			a=popP();
			b=popP();
			c=b*a;
			pushP(c);
		}
		pop=popQ();
	}
	cout<<"\nResult is ="<<c;
	return 0;
}
