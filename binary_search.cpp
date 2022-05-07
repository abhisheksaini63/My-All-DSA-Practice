#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int search(vector<int>& nums, int target) {
	int l = 0, r = nums.size() - 1;
	int mid = 0;
	while (mid <= l) {
		mid = (l + r) / 2;
		if (nums[mid] == target) {
			return mid;
		}
		if (nums[mid] > target) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return -1;
}


int main() {
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0 ; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	int target;
	cin >> target;
	cout << search(v, target);
	return 0;
}