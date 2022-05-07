#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a[n][2];
	vector<string >s;
	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
		  cin>>a[i][j];
		  
	for(int k=0;k<n;k++)
	 {
	 	string str=a[k][1];
	 	int t=str.find("@gmail.com");
	 	if(t>0)
	 	 s.push_back(a[k][0]);
	 }
	 sort(s.begin(),s.end());
	 for(int j=0;j<n;j++)
	 cout<<s[j]<<endl;
	 return 0;
}
