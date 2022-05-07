#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n, m;
	cin >> n>> m;
	char s[n][m];
	for(int i = 0 ; i< n; i++){
		for(int j = 0 ; j<m ; j++){
			cin >> s[i][j];
		}
	}
	
	int max = 0, count = 0 , teams = 0; 
	for(int  i = 0 ; i< n-1 ; i++){
		for(int k = i+1;k< n ;k++){
			for(int j = 0 ; j < m ;j++){
			 if(s[i][j] != '0' || s[k][j] != '0')
			   {	
			   	count++;
			   }
			    
			}
			if(max == count ){
				teams++;
				count = 0;
			}
			
			else if(max < count ){
				max = count ;
				count = 0;
				teams = 1;
			}
			count = 0;
			
		}
	}
	
	 cout << max << " " << teams << endl;
	 return 0;
}
