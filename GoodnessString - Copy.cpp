#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >>t;
	int l =1;
	while(t--){
		int n,k ;
		cin >> n >> k;
		string s;
		cin >>s;
		int ka = 0;
		for(int i = 0 ;i< s.length()/2-1;i++){
			if(s[i] == s[s.length()-i-1] )ka++;
		}
		if(ka == k )
		cout << "Case #" << l++ << ": " <<'0'<<endl;
		else 
		cout << "Case #" << l++ << ": " <<ka<<endl;
		
	}
	return 0;
}
