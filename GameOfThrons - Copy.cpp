#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<int > fe(26);
	for(char ch: s)
	{
		fe[ch-'a']++;
	}
	vector<int > a;
	for(int t: fe)
	{
		if(t)
		a.push_back(t);
	}
	
	int odds =0;
	sort(a.begin(), a.end());
	for(int t: a)
	{
		if(t&1)
		{
			odds++;
		}
	}
	
	if(odds <=1)
	cout<< "YES" ;
	else
	cout<< "NO";
	
	return 0;
}
