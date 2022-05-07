#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ;i< n;i++) cin >> a[i];
	int sum1 = 0, s= 0;	
//	int mul  = accumulate(a, a+(n/2), sum1) * accumulate( a+(n/2), a+n ,s);
	int mul = 1;
	for(int i = 0 ;i< n/2;i++) {
		
		sum1 += a[i];
		
	}
	for(int i = n/2 ;i< n;i++) {
		s += a[i];
	}
	mul  = sum1 * s;
	cout  << mul  << endl;
	return 0;
	
}
