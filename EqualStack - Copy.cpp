#include<bits/stdc++.h>
using namespace std;
int solve (vector<int> h1, vector<int> h2, vector<int> h3){
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	int s1 = accumulate(h1.begin(), h1.end(),sum);
	int s2 = accumulate(h2.begin(), h2.end(),sum1);
	int s3 = accumulate(h3.begin(), h3.end(),sum2);
	
	while(s1 != s2 && s2 != s3){
		int sum = 0;
		int sum1 = 0;
		int sum2 = 0;
		s1 = accumulate(h1.begin(), h1.end(),sum);
		s2 = accumulate(h2.begin(), h2.end(),sum1);
		s3 = accumulate(h3.begin(), h3.end(),sum2);
		
		if(s1 > s2 && s1 > s3){
		auto it = h1.begin();
			h1.erase(it);
		}
		else if(s2 > s1 && s2 > s3){
			auto it = h2.begin();
			h2.erase(it);
		}
		else if(s3 > s2 && s3 > s1){
			auto it = h3.begin();
			h3.erase(it);
		}
		
	}
	return s1;
	
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	vector<int> aa;
	vector<int> bb;
	vector<int> cc;
	
	for(int i = 0 ;i < a; i++){
		int t;
		cin >> t;
		aa.push_back(t);
	}
	for(int i = 0 ;i < b; i++){
		int t;
		cin >> t;
		bb.push_back(t);
	}
	for(int i = 0 ;i < c; i++){
		int t;
		cin >> t;
		cc.push_back(t);
	}
	
	int h = solve(aa, bb, cc);
	cout <<  h << endl;
	return 0;
}
