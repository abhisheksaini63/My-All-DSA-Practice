#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string , int > m;
	int q;
	cin  >> q;
	while(q--){
		int n;
		cin >> n;
		if(n == 1) {
			string s;
			int k ;
			cin >> s >> k;
			if(m.find(s) == m.end())	{
				m.insert(make_pair(s,k));
			}
			else{
				m[s] += k;
			}
		}
		
		else if( n == 2){
			
			string s;
			cin >> s;
			
			m.erase(s);
		}
		
		else {
			
			string s;
			cin  >> s;
			cout << m[s] << endl;
		}
	}
}
