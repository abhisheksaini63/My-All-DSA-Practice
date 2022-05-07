#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s1 ;
	cin >> s1;
	vector<int> fe1(26);
	for(char ch: s1) fe1[ch-'a']++;
	
	string s2 ;
	cin >> s2;
	vector<int> fe2(26);
	for(char ch: s2) fe2[ch-'a']++;
	int dele = 0;
	for(int i = 0; i< 26; i++)
	{
		if(fe1[i]-fe2[i]!=0)
		{
			dele += abs(fe1[i]-fe2[i]);
			
		}
	}
	
	
	cout << dele << endl;
	return 0;
	
	
	
}
