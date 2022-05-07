#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--){
		int n;
		cin >> n;
		
		string s[n] ;
		int flag = 1;
		for(int i = 0 ; i< n ;i++ ){
			cin>> s[i];
			sort(s[i].begin(), s[i].end());
		}
		
		
		for(int i = 0 ; i < s[0].length() ;i++){
			for(int j = 1 ;j <  n ; j++){
				if(s[0][i] <= s[j][i]){
					flag = 1;
				}
				else {
					flag = 0;
					break;
				}	
			}
			if(flag == 0) break;
		}
		
		if(flag ==1) {
			cout << "YES" <<endl;
		}
		else cout <<"NO" <<endl;
	}
}
