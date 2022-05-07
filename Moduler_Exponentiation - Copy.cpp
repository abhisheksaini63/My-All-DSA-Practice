//Moduler Exponentiation

#include<iostream>
using namespace std;

int Mod(int x, int n, int m) {
	if (n == 0 )return 1;

	else if (n % 2 == 0) {
		int y = Mod(x, n / 2, m);
		return (y * y) % m;
	}
	else {
		return ((x % m) * Mod(x, n - 1, m)) % m;
	}

	return 1;
}


int mani() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, n, m;
	cin >> x >> n >> m;

	cout << "Moduler Exponentiaiton is " << endl;
	cout << Mod(x, n, m);
	return 0;

}
