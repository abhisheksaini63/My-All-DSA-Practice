#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	string s="12,34,45,12";
	string koma1=",";
	s.append(koma1);
	vector<int>a;
	int koma=0, j;
	for(int i=0;i<=s.length();i++)
	{
		if(s[i]==',')
		{
			int t=stoi(s.substr(koma,i));
			a.push_back(t);
			koma=i+1;
		}
		
	}
	for(int j=0;j<a.size();j++)
	cout<<a[j]<<endl;
	
	return 0;
}
