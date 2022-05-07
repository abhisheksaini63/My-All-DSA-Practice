#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="tron";
	int t[26]={1,3,1,3,1,4,1,3,2,5,5,5,5,1,1,5,5,1,5,2,5,5,5,5,5,5};
	int count=0,l=s.length();
	//cout<<l<<endl;
	for(int i=0;i<l;i++)
	{
		int a=s[i]-97;
		if(t[a]>count)
		count=t[a];
	}
	cout<<1%2;
	return 0;
}
