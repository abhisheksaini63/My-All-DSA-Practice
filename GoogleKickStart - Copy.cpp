#include<bits/stdc++.h>
using namespace std;
string solve(string str){
	string s = str;
	random_shuffle(s.begin(), s.end());
	vector<int> fe (26);
	for(char c : str){
		fe[c - 'a']++;
	}
	int l = str.length()/2;
	for(int ln : fe){
		if(ln > l )
			return "IMPOSSIBLE";
		}
	}	
	return s;  
}

int main(){
    int t;
    cin >>t;
    int i = 1;
    while(t--){
        string s;
        cin >> s;
        cout << "Case "<< "#"<<i<<": " << solve(s) << endl;
        i++;
    }
 return 0;   
}
