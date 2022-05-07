#include<iostream>
#include<vector>
vector<int> a;
using namespace std;
class bst
{
	public:
	int info;
	bst *left,*right;
	
	bst(int data)
	{
		info=data;
		left=right=NULL;
	}
	
};

bst* find (bst *root ,int data)
{
	if(root==NULL)
	return NULL;
	
	else if(data<root->info)
	return (find(root->left));
	
	else if(data>root->info)
	return (find(root->right,data));
	
	return root;	
}

void insert(bst *root,int data)
{
	bst *t,*r;
	t=new bst(data);
	
	if(root==NULL)
	root=t;
	
	else
	{
		r=root;
		while(r!=NULL)
		{
			if(data>r->info)
			 {
			 	 if(r->right==NULL)
			     r->info=data;
			     r=r->right;
			 }
			
			if(data<r->info)
			 {
			 	if(r->left==NULL)
			      r->info=data;
				r=r->left;
			 }
		}
	}
}

bst* Delete(bst *root,int data)
{
	bst *temp;
	if(root==NULL)
	cout<<"\nTree is empty";
	else if(data<root->info)
	{
		root->left=Delete(root->left,data);
	}
	
	else if(data>root->info)
	    root->right=Delete(root->right,data);
	    
	else
	{
		if(root->left && root->right)
		 {
		 	temp=findmx (root->left);
		 	root->info=temp->info;
		 	root->left=Delete(root->left,root->info);
		 }
		 
		 else
		 {
		 	temp=root;
		 	if(root->left==NULL)
		 	 root=root->right;
		 	if(root->right==NULL)
		 	 root=root->left;
		 	delete(temp);
		 }
		 return root;
	}
}

void view(bst *root)
{
	bst *temp;
	t=root;
	if(root==NULL)
	 cout<<"\nEmpty";
	else
	{
		a.push_back(root);
		while(a.size()!=0)
		{
			temp=a.pop_back();
			cout<<temp->info<<" ";
			if(temp->left)
			a.push_back(temp->left);
			if(temp->right)
			a.push_back(temp->right);
		}
	}
}







