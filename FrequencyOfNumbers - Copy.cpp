#include<bits/stdc++.h>
using namespace std;

int solve(int a[]){
	int n = sizeof(a)/sizeof(a[0]);
	int max = 1, count= 1;
	if(n == 1) return a[0];
	sort(a,a+n);
	for(int i =0 ;i < n-1;i++){
		
		if(a[i] == a[i+1])count++;		
	}
	return max;	
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	
	for(int i =0 ;i<n;i++)cin >> a[i];
	cout << endl;
	cout << solve(a);
}
