#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int count=0;
		char a=s[0];
		for(int i=1;i<s.length();i++)
		{
			if(s[i]!=a)
			a=s[i];
			else
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
