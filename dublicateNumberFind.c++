#include<bits/stdc++.h>
using namespace std;
// int dublicate(vector<int> nums) {
// 	int slow = nums[0];
// 	int fast = nums[0];

// 	do {
// 		slow = nums[slow];
// 		fast = nums[nums[fast]];
// 	} while (slow != fast);
// 	fast = nums[0];
// 	while (slow != fast) {
// 		fast = nums[fast];
// 		slow = nums[slow];
// 	}
// 	return slow;
// }

// void findFreqOfStringChar(string s) {
// 	vector<int> fe(26);
// 	for (char ch : s) {
// 		fe[ch - 'a']++;
// 	}
// 	for (int i = 0; i < 26; i++) {
// 		cout << fe[i] << " ";
// 	}
// }


// void TwoSumProblem(vector<int> v, int target) {
// 	unordered_map <int, int> m;
// 	for (int i = 0; i < v.size(); i++) {
// 		m[v[i]] = v[i];
// 	}
// 	unordered_map<int, int>::iterator it = m.begin();

// 	for (int i = 0; i < v.size(); i++) {
// 		it = m.find(target - v[i]);
// 		if (it != m.end()) {
// 			cout << "yes";
// 			return;
// 		}
// 	}

// 	cout << "NO";
// 	return;
// }

void MissingNumber(vector<int> v) {
	int xr = 0;
	for (int val : v) {
		xr = xr ^ val;
	}
	for (int i = 1; i < v.size() + 1; i++) {
		xr = xr ^ i;
	}

	int rmsb = xr & -xr;
	int x = 0, y = 0;
	for (int val : v) {
		if (val & rmsb) {
			x = x ^ val;
		}
		else {
			y = y ^ val;
		}
	}

	for (int i = 1 ; i < v.size() + 1; i++) {
		if (i & rmsb) {
			x = x ^ i;
		}
		else {
			y = y ^ i;
		}
	}

	for (int val : v) {
		if (val == x ) {
			cout << "reapting number = " << x << endl;
			cout << "Missing Number = " << y << endl; break;
		}
		if (val == y) {
			cout << "reapting number = " << y << endl;
			cout << "Missing Number = " << x << endl; break;
		}
	}
}

int main()
{
	// dublicate(v)
	// findFreqOfStringChar(s);
	// TwoSumProblem(v, target);
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}

	MissingNumber(v);
	return 0;
}