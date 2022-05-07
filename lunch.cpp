#include<bits/stdc++.h>
using ll = long long int;
using namespace std;

int appleSequences(int N, int M, string arr) {
	// code here
	int count = 0;
	for (int i = 0 ; i < N ; i++) {
		if (arr[i] == 'A') count++;
	}
	if (count + M == N)return N;

	long long x = 0 , maxSum = 0;
	for (int i = 0; i < N ; i++) {
		if (arr[i] == 'A') {
			x++;
			maxSum = max(x, maxSum);
		}
		else x = 0;

	}
	if (maxSum + M <  count )  return count ;
	return maxSum + M;

}



// string solve(string s1, string s2) {
// 	int a = 0, b = 0;

// 	for (int i = 0 ; i < s1.length() ; i++) {
// 		if (s1[i] == 'A') {
// 			a = i ;
// 			break;
// 		}
// 	}
// 	for (int i = 0 ; i < s1.length(); i++) {
// 		if (s1[i] == 'B') {
// 			b = i ;
// 			break;
// 		}
// 	}

// 	int a1 = 0 , b1 = 0;
// 	for (int i = 0 ; i < s1.length() ; i++) {
// 		if (s2[i] == 'A') {
// 			a1 = i ;
// 			break;
// 		}
// 	}
// 	for (int i = 0 ; i < s1.length() ; i++) {
// 		if (s2[i] == 'B') {
// 			b1 = i ;
// 			break;
// 		}
// 	}
// 	if ((a1 <= a && a1 > b) && (b1 >= b && b1 < a)) return  "Yes";


// 	return "No" ;
// }

int main() {
	string s;
	cin >> s ;
	int n = s.length();
	int m = 1;
	cout << appleSequences(n, m , s) << endl;

	return 0;
}