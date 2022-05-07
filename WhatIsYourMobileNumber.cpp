#include<bits/stdc++.h>
#include<string>
#define macro int long long;
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s[0]!=0 && s.length()==10)
		{
			int f= s.find('.');
			if(f==-1)
			cout<<"YES"<<endl;
		}
		else 
		cout<<"NO"<<endl;
		
	}
}
