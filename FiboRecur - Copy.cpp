// C++ program to find the Nth Fibonacci
// number using Fast Doubling Method
#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
#define MOD 1000000007

// Function calculate the N-th fibanacci
// number using fast doubling method
void FastDoubling(int n, int res[])
{
	// Base Condition
	if (n == 0) {
		res[0] = 0;
		res[1] = 1;
		return;
	}
	FastDoubling((n / 2), res);

	// Here a = F(n)
	a = res[0];

	// Here b = F(n+1)
	b = res[1];

	c = 2 * b - a;

	if (c < 0)
		c += MOD;

	// As F(2n) = F(n)[2F(n+1) – F(n)]
	// Here c = F(2n)
	c = (a * c) % MOD;

	// As F(2n + 1) = F(n)^2 + F(n+1)^2
	// Here d = F(2n + 1)
	d = (a * a + b * b) % MOD;

	// Check if N is odd
	// or even
	if (n % 2 == 0) {
		res[0] = c;
		res[1] = d;
	}
	else {
		res[0] = d;
		res[1] = c + d;
	}
}

// Driver code
int main()
{
	int N = 100;
	int res[2] = { 0 };

	FastDoubling(N, res);

	cout << res[0] << "\n";
	return 0;
}

