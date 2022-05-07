#include<bits/stdc++.h>
using namespace std;
string primality(int n) {
    int flag = 1;
    for(int i = 2; i * i <= n; i++){
        if(n%i == 0) {
            flag  = 0; break;
        }
    }
    
    if(n < 1) flag = 0;
    if(flag == 1) return "Prime";
    else return "Not prime";
    
    return "Prime";

}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		string s = primality(n);
		
		cout << s << endl;
		
	}
	
	return 0;
}
