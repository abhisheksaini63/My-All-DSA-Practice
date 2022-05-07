#include<bits/stdc++.h>
using namespace std;
string solve(string s) {
	if (s.length() == 1)return"YES";
	if (s[0] != s[s.length() - 1]) return "NO";
	s = s.substr(1, s.length() - 2);
	return solve(s);

	// cout << s[s.length() - 1] ;
	// s.pop_back();
	// solve(s);

}
int main() {
	string s; cin >> s;
	cout << solve (s) << endl;
	return 0;
}