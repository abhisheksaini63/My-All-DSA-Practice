#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		string s;
		cin >> s;
		for(int i = 0 ; i < s.length()-1 ; i++)
		{
			if(s[i] == 'p' && s[i+1] == 'i')
			{
				s.replace(i, 2, "3.14");
			}
		}
		
		cout << s << endl;
	}
	return 0;
}
