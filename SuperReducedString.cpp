#include<iostream>
#include<string>
#include<vector>
using namespace std;

string erased ( string s)
{
	for(int i =0  ;i< s.length()-1; i++)
	{
		if(s[i] == s[i+1])
		{
		
			if(s.length() ==2 ) return "";
			s.erase(i,2);
			if(s.length() == 0) break;
			if(s.length()!=0)
			return erased(s);
			
		}
	}
	return s;
}
int main()
{
	string s;
	cin >>s;
	s = erased(s);
	if(s.length() == 0)
	cout << "Empty String";
	else
	cout<< s;
	
	
	
	
	
	
	
	
//	int a[26] = {0} ;
//	vector<char> c;
//	string s;
//	int count = 0;
//	cin >> s;
//	for(char ch: s)
//	a[ch-'a']++;
//	
//	for(int i = 0 ;i < 26 && a[i] ;i++)	
//	{
//		if(a[i]%2)
//		{
//			c.push_back(i+97);
//			count++;
//		}
//	}
//	if(count)
//	for(char ch : c) 
// 	cout << ch ;
// 	else
// 	cout <<"Empty String" <<endl;
	return 0;
}
