#include<bits/stdc++.h>
using namespace std;
int unionArr(int a[], int n, int b[], int m){
	set<int>s;
	for(int i =0 ; i < n; i++){
		s.insert(a[i]);
	}
	int count = s.size();
	for(int i = 0; i < m ;i++){
		if(!binary_search(s.begin(),s.end(),b[i])){
			
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	cin>> n;
	int a[n];
	for(int i =0 ;i< n; i++) cin>> a[i];
	
	int m; 
	cin>> m;
	int b[m];
	for(int i = 0; i< m ;i++)cin>> b[i];
	
	int result = unionArr(a,n,b,m);
	cout << result <<endl;
	return 0;
}
