#include<iostream>
using namespace std;
class Stack 
{
	public:
	char c;
	Stack *next;
};
Stack *startQ=NULL;
Stack *startP=NULL;
Stack *startT=NULL;

void pushQ (char c)
{
	Stack *r,*t=new Stack();
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

void pushP (char c)
{
	Stack *r,*t=new Stack();
	t->c=c;
	t->next=NULL;
	if(startP==NULL)
	startP=t;
	else 
	{
		r=startP;
		while(r->next!=NULL)
		r=r->next;
		r->next=t;
	}
}

void pushT (char c)
{
	Stack *r,*t=new Stack();
	t->c=c;
	t->next=NULL;
	if(startT==NULL)
	startT=t;
	else 
	{
		r=startT;
		startT=t;
		t->next=r;
	}
}

char popQ()
{
	Stack *t;
	char s;
	if(startQ==NULL)
	return ('\0');
	else 
	{
		t=startQ;
		startQ=t->next;
		s=t->c;
		delete(t);
		return s;
	}
}

char popP()
{
	Stack *t;
	char s;
	if(startP==NULL)
	return ('\0');
	else 
	{
		t=startP;
		startP=t->next;
		s=t->c;
		delete(t);
		return s;
	}
}

char popT()
{
	Stack *t;
	char s;
	if(startT==NULL)
	return ('\0');
	else 
	{
		t=startT;
		startT=t->next;
		s=t->c;
		delete(t);
		return s;
	}
}

void del(Stack *t)
{
	if(startT==NULL)
	cout<<"\nStack is empty";
	else 
	{
		delete(t);
	}
}

int isEmpty()
{
	if(startT==NULL)
	return 0;
	else 
	return 1;
}

void View ()
{
	Stack *r=startP;
	if(startP==NULL)
	cout <<"\nSatck is Empty ";
	else
	{
		while(r!=NULL)
		{
			cout<<r->c;
			r=r->next;
		}
	}
}

int main()
{
	string s;
	char r,e,pop;
	cout<<"Enter the Expression =";
	cin>>s;
	pushT('(');
	pushQ(')');
	for(int i=s.length();i>=0;i--)
	pushQ(s[i]);
	while(isEmpty())
	{
		r=popQ();
		if(r<=90&&r>=65||r>=97&&r<=122)
		pushP(r);
		else if(r=='(')
		pushT(r);
		else if(r=='*')
		{
			while(startT->c==r)
			{
				e=popT();
				pushP(e);
			}
			pushT(r);
		}
		else if(r=='/')
		{
			while(startT->c=='*')
			{
				e=popT();
				pushP(e);
			}
			pushT(r);
		}
		else if(r=='+')
		{
			while(startT->c=='*'||startT->c=='/')
			{
				e=popT();
				pushP(e);
			}
			pushT(r);
		}
		else if(r=='-')
		{
			while(startT->c=='+'||startT->c=='/'||startT->c=='*')
			{
				e=popT();
				pushP(e);
			}
			pushT(r);
		}
		else if(r==')')
		{
			while(startT->c!='(')
			{
				e=popT();
				pushP(e);
			}
			pop=popT();
		}
	}
	View();
}

