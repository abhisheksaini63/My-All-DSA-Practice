#include<bits/stdc++.h>
using namespace std;
int minJumps(int a[], int n){
	int r = 0;
	int count = 0;
	
	for(int i = 0 ;i< n;i++){
		if(r < i ) {
			return count;
		}
		
		r = max(r, i+a[i]);
		count++;
	}
	
	return count ;
	
}

int main(){
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0 ;i< n;i++)cin >> a[i];
	
	int ans = minJumps(a, n);
	
	cout << ans << endl;
	return 0;
}
