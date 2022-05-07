#include<bits/stdc++.h>
using namespace std;
int fun(string str){
	int n = str.length();
	int arr[n+1][n+1];
	for(int i = 0 ; i< n;i++){
		arr[i][0] = 0;
		arr[0][1] = 0;
	}
	
	for(int i =1 ;i < n;i++){
		for(int j = 1;j < n;j++){
			if(str[i-1] == str[j-1] ){
				
				arr[i][j] = 1 + arr[i-1][j-1];
			}
			else {
				arr[i][j] =max(arr[i][j-1], arr[i-1][j]);
			}
		}
	}
	
	return arr[n][n];
//	
//	for(int i = 0 ;i < n ;i++){
//		for(int j = 0 ;j < n; j++)cout << arr[i][j] << " ";
//	}
}
int main(){
	
	string s = "abbbcdcba";
	cout<<fun(s);
	
	return 0;
}
