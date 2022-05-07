#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Node 
{
	public: 
	int data;
	Node *next;
	Node *head = nullptr;
	Node(){	}
		Node(int d)
		{
			data  = d;
			next = nullptr;
		}
		
void push(int data)
{
	Node *t = new Node(data);
	if(head == nullptr )
	{
		head = t;
	}
	else
	{
		Node *r = head;	
		while(r->next != nullptr)
		r = r->next;
		
		r->next = t;
	}
}

void Reverse ()
{
	stack <Node *> S;
	Node *temp = head;
	if(head == nullptr)
	{
		cout << "List is Empty" << endl;
	}
	
	else
	{
		while(temp != nullptr)
		{
			S.push(temp);
			temp = temp->next;
		}
		
		temp = S.top(); head = temp;
		S.pop();
		while(!S.empty())
		{
			temp->next = S.top();
			S.pop();
			temp = temp->next;
		}
		
		temp->next = nullptr;
	}
}

void display ()
{
	Node *t  = head;
	if(head == nullptr )
	 cout << " List is Empty "<< endl;
	
	else
	{
		while(t->next != nullptr)
		{
			cout << t->data << " " ;
			t= t->next;
		}
	}
}

		
	
};




int main()
{
	Node t;
	for(int i = 0 ;i < 9 ;i++)
	t.push(i);
	
	t.Reverse();
	t.display();
	return 0;
}
