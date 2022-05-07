#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node *left;
		node *right;
		
		node(int data){
			this->data = data;
			this->left = nullptr;
			this->right = nullptr;
		}
};



// Find the height of BST

int FindHeight(node *root){
	if(root == nullptr)return -1;
	
	return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}




// Find min And Max in BST recursively

int findMin(node *root){
	if(root == nullptr){
		
		cout << "Root is Null" << endl;
		return -1;
	}
	
	if(root->left == nullptr){
		return root->data;
	}
	
	 return findMin(root->left);
	
}

int findMax(node *root){
	if(root == nullptr){
		
		cout << "Root is Null" << endl;
		return -1;
	}
	
	if(root->right == nullptr){
		return root->data;
	}
	
	 return findMax(root->right);
	
}


// Find Min And Max iteratively



void Min_And_Max(node *root){
	node *t = root;
	while(t->left != nullptr){
		t = t->left;
	}
	
	cout <<endl;
	cout  << t->data;
	
	node *r = root;
	while(r->right != nullptr){
		r = r->right;
	}
	
	cout << "  " << r->data << endl;
}

void showData(node *root){
	if(root == nullptr ) return ;
	showData(root->left);
	cout << root->data << " ";
	showData(root->right);
}


// Level Order traversal

void levelOrder(node *root){
	if(root == nullptr) return ;
	queue<node*> q;
	
	q.push(root);
	
	while(!q.empty()){
		node *r = q.front();
		if(r->left){
			q.push(r->left);
		}
		if(r->right){
			q.push(r->right);
		}
		
		cout << r->data<< " " ;
		
		q.pop();
	}
	
}


// Search Data in BST

bool searchBst(node *root, int data){
	if(root == nullptr ) return false ;
	
	if( root->data == data ) return true;
	
	else if( root->data > data ){
		return searchBst(root->left, data);
	}
	else return searchBst(root->right, data);
	
}


// Insert a node in BST

node* insertNode(node *root , int data){
	
	
	if(root == nullptr){
		node *t = new node(data);
		root = t;
		return root;
	}
	
	else if(root->data < data ){
		root->right = insertNode(root->right,data);
	}
	
	else {
		root->left = insertNode(root->left,data);
	}
	
	return root;
	
}




// check BST Or Not  -> 1 



bool isSubTreeLesser(node *root, int value){
	if(root == nullptr) return true;
	
	if(root->data < value && isSubTreeLesser(root->left, value) && isSubTreeLesser(root->right, value) ){
		return true;		
	}
	
	else return false ;
}

bool isSubTreeGreater(node *root, int value){
	if (root == nullptr) return true;
	
	if(root->data > value && isSubTreeGreater (root->right , value) && isSubTreeGreater(root->left, value)){
		return true;
	}
	
	else return false;
}

bool checkBstOrNot(node *root){
	if(root == nullptr) return true;
	
	if(isSubTreeLesser(root->left, root->data) && isSubTreeGreater(root->right, root->data)
		&& checkBstOrNot(root->left)
		&& checkBstOrNot(root->right)) return true;
		
	else return false;
}


// check BST Or Not  -> 2

bool checkBST(node *root, int min , int max){
	if(root == nullptr) return true;
	
	if(root->data < min || root->data > max){
		return false;
	}
	
	bool isLeftBST = checkBST(root->left, min, root->data);
	
	return isLeftBST and checkBST(root->right, root->data , max);
}

// Left View of BST 

//vector<int> v;
//
//void leftBST(Node* root , int level){
//    if(root == NULL) return ;
//    if(level == v.size()){
//        v.push_back(root->data);
//    }
//    
//    leftBST(root->left, level+1);
//    leftBST(root->right , level+1);
//    
//    
//}
//
//vector<int> leftView(Node *root)
//{
//  
//   leftBST(root, 0);
//   vector<int> va = v;
//   v.clear();
//   return va;
//}

// find min node value in right subtree

node* findMinNode(node* root){
	
	node *t  = root;
	
	while(t->left != nullptr )
	{
		t = t->left ;
	}
	
	return t;
}



// Delete a node in BST 


node* DeleteNode(node *root, int data){
	
	if(root == nullptr) return root;
	
	if(root->data > data) root->left = DeleteNode(root->left, data);
	
	else if(root->data < data ) root->right = DeleteNode (root->right , data);
	
	else {
		
		
		// 0 childs 
		
		if (root->left == nullptr && root->right == nullptr){
			delete(root);
			root = nullptr;
			
		}
		
		
		// 1 child
		else if(root->left == nullptr){
			
			node *t = root;
			root = root->right;
			delete (t);
		}
		
		else if(root->right == nullptr){
			
			node *t = root;
			root = root->left ;
			delete(t);
		}
		
		// 2 childs
		
		else {
			node *t = findMinNode(root->right);
			
			root->data = t->data;
			root->right = DeleteNode(root->right, t->data);
		}	
	}
	return root;
}

// 1- Find the closest value in BST (Reccursive)

int ClosestValue(node *root, int target, int closest = INT_MAX){
	
	if( root == nullptr) return closest;
	
	if(abs(target - closest) > abs(target - root->data)){
		closest = root->data;
	}
	
	if(target < root->data){
		return ClosestValue(root->left, target, closest);
	}
	
	else if(target > root->data){
		return ClosestValue(root->right, target, closest);
	}
	
	else 
	return closest;
	
}

// 2- Find the closest value in BST (Iterative)

int ClosestValueIt(node *root, int target, int closest = INT_MAX){
	node *currNode = root;
	
	while(currNode != nullptr){
		if(abs(target - closest) > abs(target - currNode->data)){
			closest = currNode->data;
		}
		
		if(target < currNode->data){
			currNode = currNode->left;
		}
		
		else if(target > currNode->data){
			currNode = currNode->right;
		}
		
		else break;
	}
	
	return closest;
}


// Branch Sums of BST


//void branchSums(node *root, int sum = 0, vector<int> sums = {}){
//	
//	if(root == nullptr) return ;
//	int newSum = sum + root->data;
//	
//	
//	if(root->left == nullptr && root->right == nullptr)
//	{
//		sums.push_back(newSum);
//		return ;
//	}
//	
//	branchSums(root->left, newSum, sums);
//	branchSums(root->right, newSum, sums);
//	
//	
//}
//
//vector<int> BrachSum(node *root){
//	vector<int> sums = {};
//	branchSums(root, 0, sums);
//	return sums;
//}








//	Node Depths

int nodeDepths (node* root, int depths = 0 ){
	if (root == nullptr) return 0;
	
	return depths + nodeDepths(root->left, depths+1) + nodeDepths(root->right, depths+1);
	
}






int main(){
//	node *root = nullptr;
//	root = insertNode(root,5);
//	root = insertNode(root,2);
//	root = insertNode(root,78);
//	root = insertNode(root,4);
//	root = insertNode(root,23);
//	root = insertNode(root,6);
//	root = insertNode(root,54);
//
//	showData(root);
//	
//	int depth =0;
//	depth = nodeDepths(root,depth);
//	cout << endl<< depth<<endl;
	
	node *r = new node(5);
	cout << r->data;
//	Min_And_Max(root);
//	
//	cout << endl << endl;
//	cout << findMin(root);
//	cout << endl << endl;
//	cout << findMax(root);
//	cout << endl << endl;
//	
//	cout << FindHeight(root);
//	cout << endl;
//	levelOrder(root);
//	cout << endl;
//	
//	
//	
//	int min = (-INT_MAX);
//	int max = INT_MAX;
//	
	
//	1->
	
//	if(checkBstOrNot){
//		cout << "Yes You Are Great And Its Tree is a BST Now Time to Party!";
//		cout << endl;
//	}

//    2->
//	
//	if(checkBST(root,min, max)){
//		cout << "Abhishek is Great"<<endl;
//	}
//	
//	cout << endl;
	
//	DeleteNode(root, 54);
//	
//	showData(root);
//	int closest  = ClosestValue(root, 55);
//	
//	cout << endl << closest << endl;
//	
//	int c =  ClosestValueIt(root, 10);
//	cout << c <<endl;
//	
//	
//	
	return 0;	
}
















