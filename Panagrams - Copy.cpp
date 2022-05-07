#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string RemoveSpace(string s)
{
	s.erase(remove(s.begin(),s.end(),' '), s.end());
	return s;
}
int main()
{
	string s;
	getline(cin, s);
	
	s = RemoveSpace(s);

	vector<int> fe (26);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	
	for(auto ch: s) 
	fe[ch - 'a']++;
	
	sort(fe.begin(), fe.end());
	
	if(fe[0]  >0)
	{
		cout<< "pangram";
	}
	else
	cout <<"not pangram";
	return 0;
	
}
