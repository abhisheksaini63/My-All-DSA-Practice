#include <bits/stdc++.h>
using namespace std;
bool checkValidity(int a, int b, int c)
{
	// check condition
	if (a + b <= c || a + c <= b || b + c <= a)
		return false;
	else
		return true;
}

int main() {
	int a, b , c ;
	cin >> a >> b >> c;

	if (checkValidity(a, b, c)) {
		if (a == b && b == c ) cout << "1" << endl;
		else if (a != b && b != c) cout << "3" << endl;
		else cout << "2" << endl;
	}
	else {
		cout << "-1" << endl;
	}
	return 0;
}