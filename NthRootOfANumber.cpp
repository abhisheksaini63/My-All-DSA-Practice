#include<bits/stdc++.h>
using namespace std;
double eps = 1e-6;
int main() {
	double n;
	cin >> n;
	double l = 1, r = n;
	while (r - l > eps ) {
		double mid = (l + r) / 2;
		(mid * mid < n) ? (l = mid) : r = mid;
	}
	cout << l << endl;
	return 0;

}