#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int a[n];
	for(int i =0 ;i< n;i++) cin >> a[i];
	int p = 0;
	for(int i = 0 ; i < n; i++){
		if(a[i] < 0){
			int temp = a[i];
			a[i] = a[p];
			a[p] = temp	;
			p++;
		}
	}
	
	for(int  i =0 ;i< n;i++){
		cout << a[i] << " " ;
	}
	
	return 0;
}
