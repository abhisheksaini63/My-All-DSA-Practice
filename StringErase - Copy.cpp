#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s;
	cin>>s;
	vector<char>a;
	for(int i=0;i<s.length();i+=2)
	{
		if(i==s.length()-1)
		{
			a.push_back(s[i]);
			break;
		}
		if(s[i]!=s[i+1])
		{
			a.push_back(s[i]);
			a.push_back(s[i+1]);
		}
	}
	if(a.size()==0)
	cout<<"Empty String";
	else
	{
		for(int i=0;i<a.size();i++)
		cout<<a[i];
	}
}
