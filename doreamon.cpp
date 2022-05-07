#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x) {
	vector <int>s;
	int l = 0 , r = n - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (l == r && a[l] == x) {
			s.push_back(l);
			break;
		}
		if (l == r && a[l] != x) {

			break;
		}
		if (a[mid] == x && a[mid - 1] < x) {
			s.push_back(mid);
			break;
		}
		else if (a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}


	l = 0; r = n - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (l == r && a[l] == x) {
			s.push_back(l);
			break;
		}
		if (l == r && a[l] != x) {
			break;
		}
		if (a[mid] == x && a[mid + 1] > x) {
			s.push_back(mid);
			break;
		}
		else if (a[mid] <= x) l = mid + 1;
		else r = mid - 1;

	}
	if (s.size() == 0) {
		s.push_back(-1);
		return s;
	}
	return s;

}





int main() {
	int n, x ;
	cin >> n >> x;
	int a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];

	vector < int> v;
	v = find(a, n, x);
	for (int i = 0 ; i < v.size(); i++) {
		cout << v[i] << " " ;
	}
	return 0;
}