#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ;i< n;i++)cin>> a[i];
	
	 int in = upper_bound(a,a+n, 0)- a;
    if(in == n) cout << -1 <<endl;
    else cout << in <<endl;
//	cout << in << endl;
	return 0;
}
