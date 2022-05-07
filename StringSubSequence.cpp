#include<bits/stdc++.h>
using namespace std;
string subsequence(string s1, string s2, int l1, int l2) {
	if (l1 == 0 ) return "true"	;
	if (l2 == 0) return "false";

	if (s1[l1 - 1] == s2[l2 - 1]) {
		return subsequence(s1, s2, l1 - 1, l2 - 1);
	}
	return subsequence(s1, s2, l1, l2 - 1);

}
int main() {
	string s, s2;
	cin >> s >> s2;
	int l = s.length();
	int k = s2.length();

	cout << subsequence(s, s2, l , k);

	return 0;

}