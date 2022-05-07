#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int main() {
	int n;

	cin >> n;
	std::vector<int> v;
	for (int i = 0 ; i < n ; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	auto sums = [](int a) {return ( sum += a);};
	for (int  a : v) {
		sums(a);
	}
	cout << sum << endl;
}

