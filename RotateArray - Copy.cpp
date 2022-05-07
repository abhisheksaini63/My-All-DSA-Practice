#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, d;
		cin >> n >> d;
		
		vector<int> a;
		
		for(int i =0  ;i < n;i++){
			int s; 
			cin>> s;
			a.push_back(s);
		}
		
		for(int i = 0 ; i < d; i++ ){
			a.push_back(a[i]);
			
		}
		a.erase(a.begin(),a.begin()+d);
		
		for(int i = 0 ;i< a.size(); i++) cout << a[i] <<" ";
		
	}
	return 0;
}
