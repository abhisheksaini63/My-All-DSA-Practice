#include<bits/stdc++.h>
using namespace std;
int main() {

	// Sum and count of divisors of a number

	// int n;
	// cin >> n;
	// int sum = 0;
	// int ct = 0;

	// for (int i = 1;  i * i <= n; i++) {
	// 	if (n % i == 0) {
	// 		ct += 1;
	// 		sum +=  i;
	// 		if (i != n / i) {
	// 			ct += 1;
	// 			sum += n / i;
	// 		}

	// 	}
	// }

	// cout << sum << " " << ct;



	// Prime Factors of a number


	int n;
	cin >> n;
	bool isPrime = true;


	for (int i = 2; i * i < n; i++) {
		if (n % i == 0) {
			cout << "Not Prime";
			isPrime = false ;
			break;
			// return 0;
		}
	}
	if (isPrime)
		cout << "Prime ";

	vector<int> prime_factors;

	for (int i = 2; i < n; ++i)
	{
		while (n % i == 0) {
			prime_factors.push_back(i);
			n /= i;
		}
	}
	if (n > 1) {
		prime_factors.push_back(n);
	}
	cout << endl;

	for (auto a : prime_factors) {
		cout << a << " ";
	}
	return 0;
}