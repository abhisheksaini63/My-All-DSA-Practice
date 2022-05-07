#include<bits/stdc++.h>
using namespace std;
int getCandidate(int n, int k) {
	//complte the function here
	int a = k;
	while (k <= n) {
		k *= a;
	}
	if (k == n) return k;
	return k / a;
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << getCandidate(n , k);
	return 0;
}