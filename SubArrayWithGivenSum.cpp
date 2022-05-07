#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(int arr[], int n, int s)
{
	vector<int> v;
	int l  = 0  , r = 0;
	long long int  currsum = 0;
	while (currsum < s && r < n) {
		currsum += arr[r++];
	}
	if (currsum == s) {
		v.push_back(l + 1);
		v.push_back(r);
		return v;
	}
	else {
		while (currsum != s && l < n) {
			currsum -= arr[l++];
		}
		if (currsum != s) {
			v.push_back(-1);
			return v;
		}

		v.push_back(l + 1);
		v.push_back(r);
		return v;
	}
	return v;
}
int main(int argc, char const * argv[])
{
	int n;
	cin >> n;
	int s;
	cin >> s;
	int a[n];
	for (int i  = 0; i < n; i++) cin >> a[i];
	vector<int> ans = subarraySum(a, n, s);
	for (int i : ans) {
		cout << i << " " ;
	}

}