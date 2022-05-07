#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	
	stack<char> a;
	int j = 0;
	
	for(int i = 0 ;i < s.length(); i++){
		if(s[i]== '(' || s[i]== '[' || s[i]== '{' )
		{
			a.push(s[i]);
		}
		
		else if(s[i]== ')')
		{
			if(a.empty())
			{
				j = 1;
				cout << "No"<<endl;
			}
			else{
				char ch = a.top();
			
				if(ch == '('){
					a.pop();
				}
				else{
					cout << "No" <<endl;
					j = 1;
					break;
				}
				
			}
						
		}
		
		else if(s[i]== ']')
		{
			if(a.empty())
			{
				j = 1;
				cout << "No"<<endl;
			}
			
			else {
				char ch = a.top();
			
				if(ch == '['){
					a.pop();
				}
				else{
					cout << "No" <<endl;
					j = 1;
					break;
				}	
			}			
		}
		
		
		
		else if(s[i]== '}')
		{
			if(a.empty())
			{
				j = 1;
				cout << "No"<<endl;
			}
			else {
				char ch = a.top();
			
				if(ch == '{'){
					a.pop();
				}
				else{
					cout << "No" <<endl;
					j =1;
					break;
				}
			}
		}
	}
	
	if(a.empty()  && j!=1){
		cout << "Yes" <<endl;
	}
	
	else if (j != 1 )cout << "No" << endl;
	
	
	return 0;
}
