#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>&matrix) {
	int r[matrix.size()] = {0}, c[matrix[0].size()] = {0};
	for (int i = 0 ; i < matrix.size() ; i++) {
		for (int j = 0 ; j < matrix[i].size(); j++) {
			if (matrix[i][j] == 0) {
				r[i] = 1;
				c[j] = 1;
			}
		}
	}
	for (int i = 0 ; i < matrix.size(); i++) {
		if (r[i]) {
			for (int j = 0 ; j < matrix[i].size() ; j++) {
				matrix[i][j] = 0;
			}
		}
	}
	for (int i = 0 ; i < matrix[0].size(); i++) {
		if (c[i]) {
			for (int j = 0 ; j < matrix[i].size() ; j++) {
				matrix[j][i] = 0;
			}
		}
	}

}
int main(int argc, char const *argv[])
{
	// =============Decimal to binary=================
	// int n;
	// cin >> n;
	// vector<int> v;
	// while (n > 0) {
	// 	v.push_back(n % 2);
	// 	n = n / 2;
	// }
	// for (int val = v.size() - 1; val >= 0; val--) {
	// 	cout << v[val] << " ";
	// }
	// return 0;




	// ===============Prime Number===============
	// int n;
	// cin >> n;
	// bool flag = true;
	// int i = 2;
	// for ( i = 2 ; i * i < n; i++) {
	// 	if (n % i == 0) {
	// 		flag = false;
	// 	}
	// }
	// if (i * i == n) {
	// 	flag = false;
	// 	cout << "NO" << endl;
	// 	return 0;
	// }

	// if (flag) {
	// 	cout << "YES" << endl;
	// } else cout << "NO" << endl;


	// ================Find dublicate number in an array=============
	// int n ;
	// cin >> n;
	// vector<int> v;
	// for (int i = 0 ; i < n; i++) {
	// 	int t;
	// 	cin >> t;
	// 	v.push_back(t);
	// }

	// int slow = v[0];
	// int fast = v[0];


	// do {
	// 	slow = v[slow];
	// 	fast = v[v[fast]];
	// } while (slow != fast);

	// fast = v[0];

	// while (slow != fast) {
	// 	slow = v[slow];
	// 	fast = v[fast];
	// }
	// cout << slow << endl;


// ================Find the count of 1's, 2's and 0's an array=============

	// int n;
	// cin >> n;
	// vector<int> v(n);

	// for (int i = 0 ; i < n; i++)cin >> v[i];

	// int one = 0,  two = 0, three = 0;

	// for (int i = 0 ; i < n; i++) {
	// 	if (v[i] == 0)one++;
	// 	else if (v[i] == 1) two++;
	// 	else three++;
	// }
	// cout << one << endl << two << endl << three;




	// ==============sort array of 0's, 1's and 2's================
	// int n;
	// cin >> n;
	// vector<int> v;
	// int low = 0 , mid = 0, high = n - 1;
	// for (int i = 0 ; i < n; i++) {int t; cin >> t; v.push_back(t);}
	// while (mid <= high) {
	// 	if (v[mid] == 0) {
	// 		int t = v[low];
	// 		v[low] = v[mid];
	// 		v[mid] = t;
	// 		mid++; low++;
	// 	}

	// 	else if (v[mid] == 1) {
	// 		mid++;
	// 	}
	// 	else {
	// 		int t = v[mid];
	// 		v[mid] = v[high];
	// 		v[high] = t;
	// 		high--;
	// 	}
	// }
	// for (int i = 0; i < n; i++)cout << v[i] << " " ;


	// ==============SetZero================
	int n, m;
	cin >> n >> m;

	vector<vector<int>> mat;

	for (int i = 0; i < n; i++) {
		vector<int> v;
		for (int j = 0 ; j < m ; j++) {
			int t;
			cin >> t ;
			v.push_back(t);
		}
		mat.push_back(v);
	}

	setZeroes(mat);

	for (int i = 0 ; i < n; i++) {
		for (int j = 0 ; j < m ; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}