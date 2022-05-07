#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &v, int element) {

	int l = 0 , r = v.size() - 1;
	int mid = (l + r) / 2;

	while (l <= r) {
		mid = (l + r) / 2;
		if (v[mid] == element) return mid;
		else if (v[mid] < element ) l = mid + 1;
		else r = mid - 1;
	}
	return mid + 1;

}

int main() {
	int n , element;
	cin >> n >> element;
	vector<int> v(n);

	for (int i = 0 ; i < n ; i++) cin >> v[i];

	if (v[lower_bound(v, element)] == element) {
		cout << "lower_bound = " << lower_bound(v, element);
	}
	else
		cout << "upper_bound = " << lower_bound(v, element);

	return 0;
}