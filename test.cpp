#include <bits/stdc++.h>
using namespace std;


// ✍recursion base ✍
// void myfun(vector<int>&v, int target, int n, vector<int>&ans, int id) {
// 	long long l = std::accumulate(ans.begin(), ans.end(), 0);
// 	if (id >= n) {
// 		if (l == target)
// 		{	for (int i : ans) {
// 				cout << i << " ";
// 			}
// 			cout << endl;
// 		}
// 		return;
// 	}
// 	ans.push_back(v[id]);
// 	myfun(v, target, n, ans, id + 1);
// 	ans.pop_back();
// 	myfun(v, target, n, ans, id + 1);
// }


// ✍recursion execute only for one time✍
// bool myfun(vector<int> &v, int target, int n, vector<int>ans, int id) {
// 	if (id == n) {
// 		long long l = std::accumulate(begin(ans), end(ans), 0);
// 		if (l == target) {
// 			for (int i : ans)cout << i << " ";
// 			cout << endl;
// 			return true;
// 		} return false;
// 	}

// 	ans.push_back(v[id]);
// 	if (myfun(v, target, n, ans, id + 1) == true) return true;
// 	ans.pop_back();
// 	if (myfun(v, target, n, ans, id + 1) == true) return true;
// 	return false;
// }


// ✍    Q1:- Print subSequences count that sum = k
// int myfun(vector<int> &v, int n, int target, int sum, int id) {
// 	if (id == n) {
// 		if (sum == target) return 1;
// 		return 0;
// 	}
// 	sum += v[id];
// 	int l = myfun(v, n, target, sum, id + 1);
// 	sum -= v[id];
// 	int r = myfun(v, n, target, sum, id + 1);
// 	return l + r;
// }


// ✍    Q2:-

vector<int>ans;

int  main(int argc, char const *argv[])
{
	cout << " ksdflksjdflsjdflk j ";
	// int n; cin >> n;
	// vector<int> v;
	// for (int i = 0 ; i < n; i++) {
	// 	int t; cin >> t;
	// 	v.push_back(t);
	// }
	// int target; cin >> target;

	// cout << myfun(v, n, target, 0, 0);
	return 0;
}


