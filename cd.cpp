#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>&chars) {
	if (chars.size() == 0) return 0;
	unordered_map<char, int>m;
	vector<char>ans;
	set<char> s;
	for (char c : chars) {
		s.insert(c);
	}
	cout << endl;
	for (int i = 0 ; i < chars.size(); i++) {
		m[chars[i]]++;
	}
	auto t = s.begin();
	auto it = m.begin();
	while ( t != s.end()) {
		int val = m[*t];
		ans.push_back(*t);
		if (val > 1) {
			int count =  val;
			string s = to_string(count);
			for (char ch : s) {
				ans.push_back(ch);
			}
		}

		++it; ++t;
	}
	for (int i = 0 ; i < ans.size(); i++) {
		// cout << ans.size() << endl;
		chars[i] = ans[i];
	}
	return ans.size();
}
int main(int argc, char const *argv[])
{
	cout << " lshdfljhsldfkjsljdf" ;
	vector<char>v(7);
	for (int i = 0 ; i < 7; i++) {
		char c;
		cin >> c;
		v[i] = c;
	}
	int s = compress(v);
	for (int i = 0 ; i < s; i++) {
		cout << v[i] << endl;
	}
	return 0;
}