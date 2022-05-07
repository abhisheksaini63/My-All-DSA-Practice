#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int a[], int n , int k){
int mx = *max_element(a, a+n);
//cout << mx <<endl;
        int d = mx/2;
//        cout << d <<endl;
	for(int i = 0 ; i < n  ;i++){
	    if(a[i] < d ){
	        a[i] += k;
	    }
	    else {
	        a[i] -= k;
	    }
	}
	
	for(int i = 0 ;i< n;i++)cout << a[i] <<  " " ;
	cout << endl;
	
	int mx1 = *max_element(a,a+n);
	cout << mx1 << endl;
	int mn = *min_element(a,a+n);
	cout << mn <<endl;
	return mx1- mn;
}
int main(){
	int n, k;
	cin >> k >> n;
	int a[n];
	for(int i = 0 ;i < n;i++){
	 cin >> a[i];
	}
	
	int ans = getMinDiff(a, n,k);
	cout << ans <<endl;
	return 0;
	
	
	
}
