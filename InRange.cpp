#include<bits/stdc++.h>
using namespace std;
bool check_elements(int a[], int n, int A, int B)
{
	// Your code goes here
	unordered_map<int, int> m ;
	for (int i = 0 ; i < n ; i++) {
		m[a[i]] = a[i];
	}

	for (int i = A ; i <= B ; i++) {
		if (m.find(i) == m.end())return false ;
	}

	return true;
}

int main() {
	int n; cin >> n;
	int s , l ;
	cin >> s >> l;
	int a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];
	cout << check_elements(a, n , s , l);
	return 0;
}