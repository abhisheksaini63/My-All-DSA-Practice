#include<bits/stdc++.h>
using namespace std;
int minJumps(int a[], int n) {
	int count = 0;
	int r = 0;
	for (int i = 0 ; i < n ; i++) {
		if (r < i) return -1;
		int ru = r;
		r = max (r, i + a[i]);
		if (ru != r)
			count++;
	}
	return count ;
}


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0;  i < n; i++) {
		cin >> a[i];
	}

	cout << minJumps(a, n);
	return 0;
}