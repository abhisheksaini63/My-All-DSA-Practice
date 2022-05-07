#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& v) {
	if (v.size() == 1) return v;
	vector<vector<int>> a;
	
	for(int i = 0 ;i< v.size();i++){
		if(v[i][1] > v[i+1][0]){
			v[i+1][0] = v[i][0];
			if(i == v.size() - 1){
				vector<int> b;
				b.push_back(v[i][0]);
				b.push_back(v[i+1][1]);
				a.push_back(b);
				return a;
			}
		}
		else {			
			vector<int> b;
			b.push_back(v[i][0]);
			b.push_back(v[i][1]);
			a.push_back(b);
//			cout << "push_back ho gya" << endl;
			
			if(i == v.size() - 1){
//				cout << "Isme aa gye" << endl;
					vector<int> b;
					b.push_back(v[i+1][0]);
					b.push_back(v[i+1][1]);
					a.push_back(b);
					return a;
				}
			 
			 
			
		}
	}
	
	
	return a;
        
}
int main(){
	int n;
	cin>> n;
	vector<vector<int>>v;
	
	for(int i = 0 ;i < n;i++){
		vector<int> a;
		for(int j = 0 ;j < 2; j++){
			int t;
			cin >>t;
			a.push_back(t);
		}
		v.push_back(a);
	}	
	v = merge(v);
	
	for(int i = 0 ;i < v.size();i++) {
				for(int j = 0 ;j < 2; j++){
					cout << v[i][j] << " " ;
				}	
				cout << endl;
			}	
	return 0;
}
