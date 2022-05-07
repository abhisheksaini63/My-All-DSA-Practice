#include<iostream>
#include<conio.h>

#include<queue>
using namespace std;
class node
{
	public:
	int data;
	node *left;
	node *right;
};

node *root=nullptr;

node* Max(node *root)
{
	if(root==nullptr)
	return root;
	
	else
	{
		node *max=root;
		while(max->right!=nullptr)
		max=max->right;
		return max;
	}
}

node * deleteNode(node *root,int data)
{
	if(root==nullptr)
	{
		cout<<"tree is empty";
		return root;
	}
	
	if(root->data>data)
	{
		root->left=deleteNode(root->left,data);
	}
	
	if(root->data<data)
	{
		root->right=deleteNode(root->right,data);
	}
	
	if(root->data==data)
	{
		node *t;
		if(root->right && root->left)
		{
			t=Max(root->left);
			root->data=t->data;
			root->left=deleteNode(root->left,t->data);
		}
		
		else
		{
			t=root;
			
			if(root->left!=nullptr)
			{
				root=root->left;
			}
			
			if(root->right!=nullptr)
			root=root->right;
			
			free(t);
		}
		return root;
	}
	return root;
}
 
node * insertNode (node *root,int data)
{
	node *p;
	node *n=new node();
	
	n->left=nullptr;
	n->right=nullptr;
	n->data=data;
	
	if(root==nullptr)
	{
		root=n;
		return root;
		
	}
	
	else 
	{
		p=root;
		while(p!=nullptr)
		{
			if(p->data==data)
			return root;
			if(p->data>data)
			  {
			  	if(p->left==nullptr)
			    p->left=n; 
			    p=p->left;
			  }
			  
			  if(p->data<data)
			    {
			    	if(p->right==nullptr)
			        p->right=n;
			        p=p->right;
				}
		}
	
	return root;
	}
	
	
}

void preOrder(node *root)
{
	if(root)
	{
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
	}
}

void postOrder(node *root)
{
	if(root)
	{
		postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
	}
}

void inOrder(node *root)
{
	if(root){
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
	}
}

void levelOrder(node *root)
{
	queue<node *> l;
	l.push(root);
	node *temp=root;
	if(root==nullptr)
	 {
	 	cout<<"Tree is empty";
	 	return;
	 }
	 
	while (!l.empty())
	{ 
		temp=l.front();
		l.pop();
		cout<<temp->data<<" ";
		
		if(temp->left)
		 l.push(temp->left);
		 
		if(temp->right)
		 l.push(temp->right);
	}
}


int main()
{
	int n;
	cout<<"How many values you want to add in a tree =";
	cin>>n;
	cout<<"Enter the values =>"<<endl;
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		root=insertNode(root,d);
	}
	
	
	while(1)
	{
		system("cls");
	cout<<"1-> preOrder "<<endl;
	cout<<"2-> postOrder "<<endl;
	
	cout<<"3-> inOrder "<<endl;
	cout<<"4-> levelOrder"<<endl;
	cout<<"5-> deleteNode "<<endl;
	cout<<"6-> exit"<<endl;
		cout<<"enter your choice =";
		int choice;
		cin>>choice ;
		switch(choice )
		{
			case 1:
				preOrder(root);
				getch();
				break;
				
			case 2:
				postOrder(root);
				getch();
				break;
				
			case 3:
				inOrder(root);
				getch()	;
			    break;
			    
			case 4:
				levelOrder(root);
				break;
				
			case 5:
				cout<<"enter the value =";
				int v;
				cin>>v;
				root=deleteNode(root,v);
				cout<<"delete successfull";
				getch();
				break;
				
			case 6:
				exit(0);
				break;
				
			default:
				cout<<"invalid choice ";
				break;
		}
	}
	return 0;
}
