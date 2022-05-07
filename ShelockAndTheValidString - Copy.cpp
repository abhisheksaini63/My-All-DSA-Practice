#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	
	vector<int> fe(26);
	
	for(auto ch: s){
		fe[ch - 'a']++;
	}
	
	int count = 0 ;
	
	sort(fe.begin(), fe.end(), greater<int>());
	int d = fe[0];
	int e = fe[1];
	if(abs(d - e)  >  1) {
		cout << "NO" <<endl;
		count = 2;
	}
	else {
		for(int i = 2; fe[i] != 0 || i < 26  ; i++){
			if(fe[i-1] != fe[i]){
				cout << "NO" << endl;
				count = 2;
				break;
			}
		}
	}
	

	
	 if(count <= 1) cout << "YES" <<endl;
	 return 0;
}
