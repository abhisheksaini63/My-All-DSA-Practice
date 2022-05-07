#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int t = n, j = n, i = 1;
	long long int oddsum = 0;
	long long int evensum = 0;

	while (t--) {
		oddsum += i;
		i += 2;
	}
	i  = 2;
	while (j--) {
		evensum += i;
		i += 2;
	}
	cout << oddsum << " " << evensum << endl;
	return 0;
}
