#include<bits/stdc++.h>
using namespace std;

string isBallanced(string s){
	stack<char> stk;
	int j = 0;
	
	for(int i = 0; i < s.length();i++){
		if(s[i] == '(' ||s[i] == '{' ||s[i] == '[' )
		{
			stk.push(s[i]);
		}
		
		
		else if(s[i] == ')' ){
			if(stk.empty()){
//				cout << "NO" << endl;
				j = 1;
				break;
			}
			else {
				if(stk.top() == '('){
					stk.pop();
				}
				else {
//					cout << "NO" << endl;
					j = 1;
					break;
				}
			}
		}
		
		else if(s[i] == ']' ){
			if(stk.empty()){
//				cout << "NO" << endl;
				j = 1;
				break;
			}
			else {
				if(stk.top() == '['){
					stk.pop();
				}
				else {
//					cout << "NO" << endl;
					j = 1;
					break;
				}
			}
		}
		
		else if(s[i] == '}' ){
			if(stk.empty()){
//				cout << "NO" << endl;
				j = 1;
				break;
			}
			else {
				if(stk.top() == '{'){
					stk.pop();
				}
				else {
//					cout << "NO" << endl;
					j =1 ;
					break;
				}
			}
		}
	}
	
	if  ( j ) return "NO";
	else {
		if(stk.empty() == false) return "NO";
		else return "YES";
	}
	
	return "YES";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin>> s;
		
		string result = isBallanced(s);
		cout << result << endl;
	}
	return 0;
}









