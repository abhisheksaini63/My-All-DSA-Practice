#include<bits/stdc++.h>
using namespace std;

int search(int a[], int x , int n) {
	for (int i = 0 ; i < n; i++) {
		if (a[i] == x )return i;
	}
	return -1;
}

void printPostOrder(int in[], int pre[], int n)
{
//Your code here
	int root = search(in, pre[0], n);
	// cout << root << endl;

	if (root != 0) {
		printPostOrder(in, pre + 1, root);
	}
	if (root != n - 1) {
		printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
	}

	cout << pre[0] << " ";
}

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}

	printPostOrder(a, b, n);
	return 0;
}