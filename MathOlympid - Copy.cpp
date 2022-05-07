#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
	int n;
	cin >>n;
	int a[n];
	for(int i = 0; i<n ;i++) cin >> a[i];
	int sum = a[n-1] -a[n-2];
	
	for(int i = n-2 ;i>0;i--)
	{
		if(a[i-1] != a[i]){
			int minus = a[i]- a[i-1];
			for(int j = 0 ;j < i ;j++) a[j] += minus;
			sum += abs(minus);
		}
	}
	
	cout <<sum <<endl;
	
	
}
