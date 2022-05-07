#include<iostream>
#include<string >
using namespace std;
int main()
{
	string str;
	cin >> str;
	string s= "" ;
	int c =0;
	
	
	
	for(int i = 0 ;i  < str.length();i++){
		 size_t found = s.find(str[i]);
		if(found != string::npos){
			c++;
		}
		else
		{
			s.push_back(str[i]);
		}
	}
	cout <<c <<endl;
}
