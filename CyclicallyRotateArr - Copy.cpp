#include<bits/stdc++.h>
using namespace std;

int rot(int a[], int n){
	for(int i = n-1; i > 0; i--){
		swap(a[i],a[i-1]);
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ;i< n;i++)cin>> a[i];
	rot(a,n);
	for(int i = 0; i< n;i++) cout << a[i] << " " ;
	return 0;
}
