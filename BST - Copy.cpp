#include<bits/stdc++.h>
using namespace std;

class Node 
{
public:
	int data;
	Node *left;
	Node *right;
	
	Node (){}
	
	Node (int value)
	{
		this->data= value;
		this->left = nullptr;
		this->right = nullptr;
	}
	
	//Node* insertNode (int , Node* );
	//void display(Node*);
};

Node *root = nullptr;

Node* findMin (Node *root)
{
	Node *temp = root;
	while( temp->left != nullptr)
	 temp = temp->left;
	 
	 return temp; 
}

Node* deleteNode ( Node *root, int data)
{
	if( root == nullptr )
	return root;
	
	else if( data < root->data )
	root->left = deleteNode ( root->left, data);
	
	else if( data > root->data )
	root->right = deleteNode ( root->right, data);
	
	else if( root->left == nullptr && root->right == nullptr)
	{
		delete root;
		root = nullptr;
	}
	
	else if ( root->left == nullptr)
	{
		Node *temp = root;
		root = root->right;
		delete temp;
	}
	
	else if ( root->right == nullptr)
	{
		Node *temp = root;
		root = root->left;
		delete temp;
	}
	
	else
	{
		Node *temp = findMin ( root->right );
		root->data = temp->data;
		root->right = deleteNode( root->right, temp->data);
	}
	
	return root;
}

Node* insertNode (int value, Node *root)
{
	if( root == nullptr )
	{
		root = new Node (value);
		//cout << " Inset Successfull" << endl ;
		return root;
	}
	
	else if( root->data > value)
	{
		if( root->left == nullptr)
		{
			root->left = new Node (value);
		//	cout << " Inset Successfull" << endl ;
			return root;
		}
		
		insertNode ( value , root->left);
	}
	
	else if( root->data < value )
	{
		if( root->right == nullptr )
		{
			root->right = new Node(value);
		//	cout << " Inset Successfull" << endl ;
			return root;
			
		}
		
		insertNode(value, root->left);
	}
	
	
	/*if( root == nullptr )
	{
		
		return new Node (value);
	}
	
	else if( root->data > value)
	{
		root->left = insertNode (value, root->left);
		return root;
	}
	
	else
	{
		root->right = insertNode (value, root->right);
		return root;
	}
	return root;*/
}

Node* findNode (int value, Node * root)
{
	if( !root )
	{
		cout << " Tree is empty or Not found" << endl;
		return root;
	}
	
	if( root->data == value)
	{
		cout << "Found Successfully" << endl;
		return root;
	}
	
	if( root->data > value )
	return findNode( value, root->left);
	
	if( root->data < value)
	{
		return findNode(value, root);
	}
}

void display(Node *root)
{
	if ( root == nullptr)
	{
		//cout << " bekar code hai" << endl;
	}
	if(root != nullptr)
	{
		//cout << " aa gye" << endl;
		
		cout<< root->data << endl;
		display ( root->left );
		
		display ( root->right );
	}
}

int main()
{
	//Node a;
	root = insertNode (6, root);
	insertNode (3, root);
	insertNode (4, root);
	insertNode (10, root);
	insertNode (1, root);
	insertNode (2, root);
	insertNode (5, root);
	insertNode (8, root);
	
	
	display( root );
	
	
	deleteNode(root, 10);
	cout << "After deletion " << endl;
	display(root);
}
