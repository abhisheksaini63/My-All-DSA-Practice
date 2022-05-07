#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
class tree
{
	public:
	int info;
	tree *left,*right;
};

//tree *root=NULL;
vector<int>a;

void insert(tree *root,int data)
{
	tree *t,*pre;
	t=new tree();
	t->info=data;
	t->left=NULL;
	t->right=NULL;
	if(root==NULL)
	root = t;
	else 
	{	
		pre=root;
		while(pre!=NULL)
		{
		
		if(pre->info>data)
		{
			if(pre->left==NULL)
			  pre->left=t;
			pre=pre->left;
		}
		
		else if(pre->info<data)
		{
			if(pre->right==NULL)
			   pre->right=t;
		  	pre=pre->right;
		}
       }
    }
}

void view (tree *root)
{
	if(root!=NULL)
	{
	a.push_back(root->info);
	view(root->left);
	view(root->right);
	}
}

int main()
{
	int choice,data;
	tree *root=NULL;
	while(1)
	{
		system("cls");
		cout<<"1- insert data";
		cout<<"\n2- view";
		cout<<"\n3- exit";
		cout<<"\nEnter the choice ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter the data";
				cin>>data;
				insert(root,data);
				break;
			case 2:
				view(root);
				for(int i=0;i<a.size();i++)
				cout<<a[i]<<" ";
				getch();
				break;
			case 3:
				exit(0);
			default:
				cout<<"\nInvalid choice";
		}
	}
	return 0;
}
