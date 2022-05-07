#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n ;
		cin >> n;
		if (n & (n - 1) == 0) {
			cout << "yes" << endl;
		}
		else cout << "no" << endl;
	}
	return 0;
}