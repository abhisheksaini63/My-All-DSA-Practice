#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
int main()
{
	int t ;
	cin >> t;
	while(t--)
	{
//		string s;
//		vector<int > fe (26);
//		
//		cin >> s;
//		for(char ch: s)
//		fe[ch-'a']++;
		string s;
		cin >> s;
		
		
		set<char> c;
		for(int i = 0 ;i< s.length();i++)
		c.insert(s[i]);
		
		cout << c.size()  << endl;
		
	}
	return 0;
}
