#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	string b;
	cin >> b;
	int count = 0;
	vector<int> fe(26);
	vector<int > fe1(26);
	
	for(auto ch : a){
		fe[ch - 'a']++;
	}
	
	for(auto ch: b){
		fe1[ch - 'a']++;
	}
	
	for(int i = 0 ;i < 26 ;i++){
		count += abs(fe[i] - fe1[i]);
	}
	
	cout << count <<endl;
	
	return 0;
}
