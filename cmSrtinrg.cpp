#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s1,s2;
		cin>>s1>>s2;
		if(s1==s2)
		cout<<"e";
		else if(s1>s2)
		cout<<"l";
		else
		cout<<"s";
		
	
	}
	return 0;
}

