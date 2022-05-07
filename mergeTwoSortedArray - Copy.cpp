#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int n, int m) {
	
	int l = 0 , r = 0;
	
	while(l < n && r < m){
		if(b[r] <= a[l]){
			int t = b[r];
			b[r] = a[l];
			a[l] = t;
			sort(b, b+m);
			l++;
		}
		else r++;
	}
	
	
}

int main(){
	int n;
	cin >> n;
	int m ; cin >> m;
	
	int a[n] , b[m];
	 for(int i = 0 ;i< n; i++) cin >>  a[i] ;	 
	 for(int i = 0 ;i < m ;i++) cin >> b[i] ;
	 
	 merge(a,b, n , m);
	 
	 for(int i = 0 ;i< n; i++) cout <<   a[i] << " " ;
	 cout << endl;
	 
	 for(int i = 0 ;i < m ;i++) cout <<  b[i]<< " ";
	 cout << endl;
	
	 
	 return 0;
}
