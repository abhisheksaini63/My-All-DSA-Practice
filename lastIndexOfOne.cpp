#include<bits/stdc++.h>
using namespace std;
// int lastIndex(string s)
// {
// 	for (int i = s.length() - 1 ; i >= 0; i--) {
// 		if (s[i] == '1') return i;
// 	}
// 	return -1;
// }

int main() {
	// string s;
	// cin >> s;
	// cout << lastIndex(s);
	int a[] = {9, 7, 2, 16, 4};
	sort(a, a + 5);
	int l = lower_bound(a, a + 5 , 16) - a;
	cout << l << endl;
	return 0;
}