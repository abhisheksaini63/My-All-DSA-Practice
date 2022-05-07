#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack <char> s;
	string str ;
	cin>> str;
	int i= 0, l  = 0;
	while(l != str.length()){
		if(str[i] == '{' ||  str[i] == '(' ||  str[i] == '['  )
		s.push(str[i]);
		
		else if(str[i] == '}')
		{
			if(s.top() == '{'){
				s.pop();
			}
			else { i++;
				cout << "NO" <<endl;
				break;
			}
			
		}
		else if(str[i] == ')' ){
			if(s.top() == '('){
				s.pop();
			}
			else {i++;
				cout << "NO" <<endl;break;
			}
			
		}
		else if( str[i] == '[' ){
			if(s.top() == '['){
				s.pop();
			}
			else { i++;
				cout << "NO" <<endl;break;
			}	
		}
		l++;
					
	}
	
	if(!i){
		cout <<"Yes " <<endl;
		
	}
	
	return 0;
	

}
