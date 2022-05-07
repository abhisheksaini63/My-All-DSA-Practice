#include<bits/stdc++.h>
using namespace std;
int isPlaindrome(string s)
	{
	    int l = s.length()-1;
	    int i = 0;
	    if(s.length()%2 == 0){
	        while(i < l){
	            if(s[i] != s[l]){
	                return 0;
	            }
	            i++;
	            l--;
	        }
	    }
	    else {
	        while(i <= l){
	            if(s[i] != s[l]){
	                return 0;
	            }
	            i++;
	            l--;
	        }
	    }
	    
	    return 1;
	    // Your code goes here
	}
	
int main(){
	string s;
	cin >> s;
	int a = isPlaindrome(s);
	cout << a <<endl;
	
	return 0;
}
