#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0 ; i < n ; i++) cin >> a[i];

	int count = 1;
	int curCount = 1;
	for (int i = 0 ; i < n - 1; i++) {
		if (a[i] < a[i + 1] ) count++;
		else {curCount = max(curCount, count); count = 1}
	}
	if (count > curCount) curCount = count;
	cout << curCount << endl;
	return 0;
}