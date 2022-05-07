// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
	void zigZag(int arr[], int n) {
		arr.sort();
		for (const auto i : arr)cout << i << endl;
	}
};


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		ob.zigZag(arr, n);
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
