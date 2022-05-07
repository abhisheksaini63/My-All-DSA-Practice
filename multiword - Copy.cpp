#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int i=0,count=0;
	string str;
	getline(cin, str);
	//cout<<str.length();
	str.insert(str.begin(),' ');
	for(i=str.length()-1;i>=0;i--)
	{
		if(str[i]==' ')
		break;
		count++;
	}
	
	cout<<count;
}
