#include<bits/stdc++.h>
using namespace std;


class node {
public:
	int data;
	node *left;
	node *right;

	node(int data) {
		this->data = data;
		this->left = nullptr;
		this->right = nullptr;
	}
};



int maxPathSumWithMaxi(node* root, int &maxi);

// ✍PRE-ORDER (RECURRSIVE)✍

void preOrder(node *root) {
	if (root == NULL) return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}


✍POST - ORDER (RECURRSIVE)✍

void postOrder(node *root) {
	if (root == NULL) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}


✍IN - ORDER (RECURRSIVE)✍

void inOrder(node *root) {
	if (root == NULL) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}


// ✍LEVEL-ORDER TRAVERSAL✍

void levelOrder(node *root) {
	if (root == NULL) return ;

	queue<node*> q;
	q.push(root);
	while (!q.empty()) {
		node* r = q.front();
		q.pop();
		cout << r->data << " ";
		if (r->left) {
			q.push(r->left);
		}
		if (r->right) q.push(r->right);
	}
}

// ✍PRE-ORDER (ITERATIVE)✍

void preOrderTrav(node *root) {
	if (root == NULL) return;

	stack<node*> st;
	st.push(root);
	while (!st.empty()) {
		node *r = st.top();
		st.pop();
		cout << r->data << " ";
		if (r->right) st.push(r->right);
		if (r->left) st.push(r->left);
	}
}


// ✍POST-ORDER (ITERATIVE)✍

void postOrderTrav(node *root) {
	if (root == NULL) return ;

	stack<node*> st1;
	stack<node*> st2;
	st1.push(root);
	while (!st1.empty()) {
		node *r = st1.top();
		st1.pop();
		st2.push(r);
		if (r->left) st1.push(r->left);
		if (r->right) st1.push(r->right);
	}

	while (!st2.empty()) {
		cout << st2.top()->data << " ";
		st2.pop();
	}
}


// ✍IN-ORDER (ITERATIVE)✍

void inOrderTrev(node *root) {
	if (root == NULL) return;

	stack<node*> st;
	node *r = root;
	while (true) {
		if (r != NULL) {
			st.push(r);
			r = r->left;
		}

		else {
			if (st.empty()) break;
			r = st.top();
			st.pop();
			cout << r->data << " ";
			r = r->right;

		}
	}
}


// ✍(PRE + POST + IN) -> ORDER (ITERATIVE)✍

void PrePostInOrder(node *root) {
	if (root == NULL) return ;

	stack<pair<node*, int>> st;
	vector <int> in, pre, post;
	st.push({root, 1});

	while (!st.empty()) {
		auto it = st.top();
		st.pop();

		if (it.second == 1) {
			pre.push_back(it.first->data);
			it.second++;
			st.push(it);
			if (it.first->left) {
				st.push({it.first->left, 1});
			}
		}

		else if (it.second == 2) {
			in.push_back(it.first->data);
			it.second++;
			st.push(it);
			if (it.first->right) {
				st.push({it.first->right, 1});
			}
		}
		else {
			post.push_back(it.first->data);
		}
	}

	for (auto val : pre) {
		cout << val << " ";
	}
	cout << endl;
	for (auto val : in) {
		cout << val << " ";
	}
	cout << endl;
	for (auto val : post) {
		cout << val << " ";
	}
	cout << endl;
}


// ✍HEIGHT OF TREE✍

int height(node *root) {
	if (root == NULL) return 0;

	int l = height(root->left);
	int r = height(root->right);

	return 1 + max(l, r);
}


// ✍BALLANCED BINARY TREE✍

int isBallanced (node *root) {
	if (root == NULL) return 0;

	int l = isBallanced(root->left);
	if (l == -1) return -1;
	int r = isBallanced(root->right);
	if (r == -1) return -1;

	if (abs(l - r) > 1) return -1;

	return max (l, r) + 1;

}

// ✍DIAMETER OF BINARY TREE✍


int diaMeter(node *root, int &diaMeterVal) {
	if (root == NULL) return 0;

	int l = diaMeter(root->left, diaMeterVal);
	int r = diaMeter(root->right, diaMeterVal);

	diaMeterVal = max (diaMeterVal, l + r);

	return 1 + max(l, r);
}



// ✍IDENTICAL OR NOT BETWEEN TWO BINARY TREES✍

bool identical(node *root , node *root1) {
	if (root == NULL || root1 == NULL) {
		return root == root1 ;
	}

	return (root->data == root1->data
	        && identical(root->left, root1->left)
	        && identical(root->right, root1->right));
}


//   ✍MAX PATH SUM BETWEEN TWO NODES✍

int maxPathSum (node* root) {
	int maxi = INT_MIN;
	maxPathSumWithMaxi(root, maxi);
	return maxi;
}

int maxPathSumWithMaxi(node* root, int &maxi) {
	if (root == NULL) return 0;

	int l = max (0, maxPathSumWithMaxi(root->left, maxi));
	int r = max (0, maxPathSumWithMaxi(root->right, maxi));

	maxi = max (maxi, l + r + root->data);

	return ( max(l , r) + root->data);
}



//   ✍ZIG-ZAG TRAVERSAL OF A BINARY TREE✍

vector<vector<int>> zig_zagTrav(node* root) {
	vector<vector<int>> res;
	if (root == NULL ) return res;

	queue<node*> nodesQue;
	bool flag = true;
	nodesQue.push(root);

	while (!nodesQue.empty()) {
		int s = nodesQue.size();
		vector<int> row(s);

		for (int i = 0 ; i < s; i++) {
			node *r = nodesQue.front();
			nodesQue.pop();

			int indx = (flag) ? i : s - 1 - i;

			row[indx] = r->data;

			if (r->left) nodesQue.push(r->left);
			if (r->right) nodesQue.push(r->right);
		}

		flag = !flag;
		res.push_back(row);
	}
	return res;
}



// //  ✍BOUNDRY TRAVERSAL OF A BINARY TREE✍

bool isLeaf(node *root) {
	if (root->right == NULL && root->left == NULL) {
		return true;
	} return false;
}

void addLeftBoundry(node *root, vector<int> &res) {
	node *cur = root->left;
	while (cur) {
		if (!isLeaf(cur))res.push_back(cur->data);
		if (cur->left) cur = cur->left;
		else cur = cur->right;
	}
}

void addLeafs(node *root , vector<int> &res) {
	if (isLeaf(root)) {
		res.push_back(root->data);
		return ;
	}

	if (root->left)addLeafs(root->left, res);
	if (root->right)addLeafs(root->right, res);
}

void addRightBoundry(node *root, vector<int> &res) {
	node *cur = root->right;
	vector<int> temp;
	while (cur) {
		if (!isLeaf(cur)) temp.push_back(cur->data);
		if (cur->right) cur = cur->right;
		else cur = cur->left;
	}

	for (int i = temp.size() - 1; i >= 0; i--) {
		res.push_back(temp[i]);
	}
}


vector<int > boundry_traversal(node *root) {
	vector<int> res;

	if (root == NULL ) return res;

	res.push_back(root->data);
	addLeftBoundry(root, res);
	addLeafs(root,  res);
	addRightBoundry(root, res);

	return res;
}


//   ✍VERTICAL TRAVERSAL OF A BINARY TREE✍

vector<vector<int>> verticalTrav(node *root) {
	vector < vector<int>> res;
	if (root == NULL) return res;

	map < int, map<int, multiset<int>>> val;
	queue < pair<node*, pair<int, int>>> nodesQ;

	nodesQ.push({root, {0, 0}});

	while (!nodesQ.empty()) {
		auto p = nodesQ.front();
		nodesQ.pop();

		node *r = p.first;
		int vertical = p.second.first; int level = p.second.second;
		val[vertical][level].insert(r->data);

		if (r->left) nodesQ.push({r->left, {vertical - 1, level + 1}});
		if (r->right) nodesQ.push({r->right, {vertical + 1, level + 1}});
	}

	for (auto p : val) {
		vector<int> col;
		for (auto q : p.second) {
			col.insert(col.end(), q.second.begin(), q.second.end());
		}
		res.push_back(col);
	}
	return res;
}


// ✍ TOP VIEW OF BINARY TREE ✍

vector<int> topView(node* root) {
	vector<int> res;
	if (root == NULL) return res;

	map<int, int> nodes;
	queue<pair<node*, int>> nodesQ;

	nodesQ.push({root, 0});
	while (!nodesQ.empty()) {
		auto p = nodesQ.front();
		nodesQ.pop();

		node* r = p.first;
		int line = p.second;
		if (nodes.find(line) == nodes.end()) nodes[line] = r->data;
		if (r->left) nodesQ.push({r->left, line - 1});
		if (r->right) nodesQ.push({r->right, line + 1});
	}

	for (auto v : nodes) {
		res.push_back(v.second);
	}

	return res;
}

//         ✍ BOTTOM VIEW OF BINARY TREE ✍


vector<int> bottomView(node* root) {
	vector<int> res;
	if (root == NULL) return res;

	queue<pair<node*, int>> nodesQ;
	map<int, int> val;

	nodesQ.push({root, 0});
	while (!nodesQ.empty()) {
		auto p = nodesQ.front();
		nodesQ.pop();
		node* r = p.first;
		int line = p.second;

		val[line] = r->data;

		if (r->left) nodesQ.push({r->left, line - 1});
		if (r->right)nodesQ.push({r->right, line + 1});
	}

	for (auto v : val) {
		res.push_back(v.second);
	}
	return res;
}



// ✍ LEFT VIEW OF BINARY TREE ✍

vector<int>v;
void leftViewHelp(node* root, int level) {
	if (root == NULL) return;

	if (level == v.size())v.push_back(root->data);

	leftViewHelp(root->left, level + 1);
	leftViewHelp(root->right, level + 1);
}

vector<int> leftView(node* root) {
	if (root == NULL) return v;
	leftViewHelp(root, 0);
	vector<int> val = v;
	v.clear();
	return val;
}


//✍ RIGHT VIEW OF BINARY TREE ✍

vector<int> r;
void  rightViewHelp(node* root, int level) {
	if (root == NULL) return ;

	if (level == r.size()) r.push_back(root->data);

	rightViewHelp(root->right, level + 1);
	rightViewHelp(root->left, level + 1);
}

vector<int> rightView(node* root) {
	if (root == NULL) return r;

	rightViewHelp(root, 0);
	vector<int> val = r;
	r.clear();
	return val;
}




//         ✍ CHECK BINARY TREE SYMMETRICAL OR NOT ✍

bool checkSymmetricalHelp(node* left, node* right) {
	if (left == NULL || right == NULL ) return left == right;

	if (left->data != right->data) return false;

	return checkSymmetricalHelp(left->left , right->right)
	       && checkSymmetricalHelp(left->right, right->left);
}

bool checkSymmetrical(node* root) {
	return root == NULL || checkSymmetricalHelp(root->left, root->right);
}




// ✍ ROOT TO ANY NODE OF A BINARY TREE ✍

bool rootToNode(node* root, int target, vector<int> &v) {
	if (!root) return false;
	v.push_back(root->data);

	if (root->data == target) return true;

	if (rootToNode(root->left, target, v) || rootToNode(root->right, target, v))
		return true;

	v.pop_back();
	return false;
}


//✍ LOWEST COMMON ANCESTOR IN A BINARY TREE
node* lowest_common_ancestor(node* root, int p, int q) {
	if (root == NULL || root->data == p || root->data == q ) {
		return root;
	}

	node* l = lowest_common_ancestor(root->left, p, q);
	node* r = lowest_common_ancestor(root->right, p , q);

	if (l == NULL) return r;
	if (r == NULL) return l;

	return root;
}



//✍ MAXIMUM WIDTH OF A BINARY TREE

int maxWidthOfBinaryTree(node* root) {
	if (!root) return 0;

	queue<pair<node*, int>> nodesQ;
	int ans = 0;
	nodesQ.push({root, 0});

	while (!nodesQ.empty()) {
		int size = nodesQ.size();
		int first = 0 , last = 0;
		int mmin = nodesQ.front().second;   // to make the id starting from 0

		for (int i = 0 ; i < size; i++) {
			int cur_id = nodesQ.front().second - mmin;
			node* q = nodesQ.front().first;
			nodesQ.pop();
			if (i == 0 )first = cur_id;
			if (i == size - 1) last = cur_id;

			if (q->left) nodesQ.push({q->left, cur_id * 2 + 1});
			if (q->right) nodesQ.push({q->right, cur_id * 2 + 2});
		}

		ans = max(ans, last - first + 1);
	}
	return ans;
}




//✍ MAXIMUM WIDTH OF A BINARY TREE

void childrenSumProp(node* root) {
	if (!root) return;

	int sum  = 0 ;
	if (root->left) sum += root->left->data;
	if (root->right) sum += root->right->data;
	// sum  = l + r;
	if (sum > root->data) {
		root->data = sum;
	}
	// cout << " hello" << sum << " " << endl;

	if (root->left)root->left->data = root->data;
	if (root->right)root->right->data = root->data;

	childrenSumProp(root->left);
	childrenSumProp(root->right);

	int t = 0;         // re-asign the root value as (root = left + right)
	if (root->left) t += root->left->data;
	if (root->right) t += root->right->data;

	if (root->left || root->right) root->data = t;

}



// ✍ ALL NODES AT K DISTANCE FROM A NODE IN BINARY TREE

void make_parentF(node* root, unordered_map<node*, node*> &make_parent) {
	if (root == NULL ) return;
	queue<node*> nodesQ;
	nodesQ.push(root);
	while (!nodesQ.empty()) {
		node* r = nodesQ.front();
		nodesQ.pop();
		if (r->left) {
			nodesQ.push(r->left);
			make_parent[r->left] = r;
		}
		if (r->right) {
			nodesQ.push(r->right);
			make_parent[r->right] = r;
		}
	}
}

vector<int>allNodesOFKDist(node* root, int  target, int k) {
	unordered_map<node*, node*> make_parent;
	make_parentF(root, make_parent);
	unordered_map<node*, bool>visited ;
	queue<node*> q;
	q.push(root);
	visited[root] = true;
	int l = 0;
	while (!q.empty()) {
		int s = q.size();
		if (l++ == k) break;
		for (int i = 0 ; i < s ; i++) {
			node* r = q.front();
			q.pop();
			if (r->left && !visited[r->left]) {
				q.push(r->left);
				visited[r->left] = true;
			}
			if (r->right && !visited[r->right]) {
				q.push(r->right);
				visited[r->right] = true;
			}

			if (make_parent[r] && !visited[make_parent[r]]) {
				q.push(make_parent[r]);
				visited[make_parent[r]] = true;
			}
		}
	}

	vector<int> ans;
	while (!q.empty()) {
		node* a = q.front(); q.pop();
		ans.push_back(a->data);
	}

	return ans;
}



// ✍FIND THE TOTAL NODES IN A BINARY TREE


int findLeftHeight(node* root) {
	// if (!root) return 0;
	int h = 0 ;
	while (root) {
		h++;
		root = root->left;
	}
	return h;
}


int findRightHeight(node* root) {
	// if (!root) return 0;

	int h = 0;
	while (root) {
		h++;
		root = root->right;
	}
	return h;
}

int totalNodes(node* root) {
	if (root == NULL) return 0;

	int l = findLeftHeight(root->left);
	int h = findRightHeight(root->right);

	if (l == h) return ((1 << l) - 1);

	return (1 + totalNodes(root->left) + totalNodes(root->right));
}


////////////////////----Main Funciton ----////////////////////////////

int main() {
	node *root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(5);
	root->left->right = new node(6);
	root->right->left = new node (8);
	root->right->right = new node (9);


	node *root1 = new node(1);
	root1->left = new node(2);
	root1->right = new node(3);
	root1->left->left = new node(5);
	root1->left->right = new node(4);
	root1->right->left = new node (6);
	root1->right->right = new node (8);

	✍TRAVERSALS

	✍preOrder(root);
	cout << endl;
	✍postOrder(root);
	cout << endl;
	✍inOrder(root);
	cout << endl;
	✍levelOrder(root);
	cout << endl;
	✍preOrderTrav(root);
	cout << endl;
	✍inOrderTrev(root);
	cout << endl;
	✍postOrderTrav(root);
	cout << endl;

	// ✍PrePostInOrder(root);
	cout << "\nHeight of Tree is = " ;
	cout << height(root) << endl;



	// ✍CHECK BALLANCED

	if (isBallanced(root) == -1) {
		cout << "NOT BALLANCED  " << endl;
	}
	else cout << "BALLANCED Tree" << endl;




	// ✍DIAMETER OF BINARY TREE

	int diaMeterVal = 0;
	int diaMeterOfTree = diaMeter(root, diaMeterVal);
	cout << diaMeterVal << endl;


	// ✍IDENTICAL OR NOT

	if (identical(root, root1)) {
		cout << "IDENTICAL " << endl;
	}
	else cout << "NOT IDENTICAL" << endl;




	// ✍MAX PATH SUM BETWEEN TWO NODES

	int res = maxPathSum(root);
	cout << res << endl;


	// ✍ZIG - ZAG TRAVERSAL OF A BINARY TREE

	vector<vector<int>> res = zig_zagTrav(root);

	for (int i = 0 ; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}


//   ✍BOUNDRY TRAVERSAL OF A BINARY TREE

	vector<int> res = boundry_traversal(root);
	for (auto val : res) {
		cout << val << " ";
	}


//   ✍VERTICAL TRAVERSAL OF A BINARY TREE

	vector<vector<int>>ans = verticalTrav(root);

	for (int i = 0 ; i < ans.size() ; i++) {
		for (int j = 0 ; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

	// ✍TOP VIEW OF BINARY TREE

	vector<int> ans = bottomView(root);
	for (int i = 0 ; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	//  ✍CHECK SYMMETRICAL OR NOT
	// if (checkSymmetrical(root)) cout << "yes" << endl;
	// else cout << "no" << endl;


	//  ✍ROOT TO ANY NODE PATH
	// vector<int> v;
	// if (rootToNode(root, 8, v)) {
	// 	cout << "YES" << endl;
	// 	for (auto val : v) {
	// 		cout << val << " ";
	// 	}
	// }
	// else cout << "NO" << endl;



	// ✍ LOWEST COMMON ANCESTOR IN A BINARY TREE
	// int p = 2, q = 8;
	// node* r = lowest_common_ancestor( root,  p,  q);
	// if (r) cout << r->data << " ";
	// else cout << "NULL" << endl;

	// ✍ LEFT VIEW OF A BINARY TREE

	// vector<int> l = leftView(root);
	// for (auto val : l) cout << val <<  " " ;

	// ✍ RIGHT VIEW OF A BINARY TREE

	// vector<int> l = rightView(root);
	// for (auto val : l) cout << val <<  " " ;



	// ✍ MAXIMUM WIDTH OF A BINARY TREE

	// int ans = maxWidthOfBinaryTree(root);
	// cout << ans << endl;



	// ✍ CHILDREN SUM PROPERTY OF A BINARY TREE

	// childrenSumProp(root);
	// cout << endl;
	// preOrder(root);

	// ✍ALL NODES OF K DISTANCE IN A BINARY TREE

	// vector<int> v;
	// int target = 2;
	// int k = 1;
	// v  = allNodesOFKDist(root, target, k);

	// for (auto val : v)cout << val << " ";


	// ✍FIND THE TOTOAL NODES IN A BINARY TREE

	// int totol = totalNodes(root);
	// cout << totol << endl;
}