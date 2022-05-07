#include<bits/stdc++.h>
using namespace std;

vector <string> v;

void GenerateParanthesis(string &s, int open, int close) {
	if (open == 0 && close == 0 ) {
		v.push_back(s);
		return;
	}

	if (open > 0) {
		s.push_back('(');
		GenerateParanthesis(s, open - 1 , close);
		s.pop_back();
	}

	if (close > 0) {
		if (open < close ) {
			s.push_back(')');
			GenerateParanthesis(s, open, close - 1 );
			s.pop_back();
		}
	}
}


int main(int argc, char const *argv[])
{

	int n;
	cin >> n;
	string s = "";
	GenerateParanthesis(s, n, n);
	for (string str : v) {
		cout << str << endl;

	}
	return 0;
}