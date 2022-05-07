#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &a){
	bool c= false; 
	for(int i = 0 ;i <a.size()-1; i++ ){
		if(a[i] < a[i+1]){
			c = true;
			break;
		}
	}
	if(!c) return 0;
	int l = 0 , r = a.size() -1;
	int mn = a[l] , mx = a[r];
	for(int i = 0 ;i < a.size();i++){
		if(mn > a[l+1]){
			mn = a[l+1]	;
			l++;
			
		}
		if(mx < a[r-1]){
			mx = a[r-1];
			r--;
			
		}
	}
	return mx - mn;
//	cout << mx << " " << mn << endl;
	
//	int mn = min_element(a.begin(), a.end())-a.begin();
//	
//	if(mn == a.size() - 1) return 0;
//	
//	int mx = max_element(a.begin()+mn, a.end()) - (a.begin());
//	
//	int d = a[mx] - a[mn];
//	return d;
	
}
int main(){
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 0 ; i< n;i++){
		int t;
		cin>> t;
		a.push_back(t);
	}
	
	int ans = maxProfit(a);
	
	cout << ans << endl;
	return 0;
}
