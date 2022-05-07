#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	std::vector<int> v;
	for (int i = 0 ; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	for (int a : v) {
		cout << a << " ";
	}
	// cout << all_of(v.begin(), v.end(), [](int a) {return a < 0;});


}
