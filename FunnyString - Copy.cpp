#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		
		string s1;
		cin >> s1;
		string s= s1;
		bool c = false;
		reverse(s1.begin(), s1.end());
		for(int it = 0 ;it < s.length()-1;it++)
		{
			int d1 = abs((int)s[it] - (int )s[it+1]);
			int d2 = abs((int)s1[it] - (int )s1[it+1]);
			
			if(d2 != d1) 
			{
				cout << "Not Funny" << endl; c = true;
				break;
			}
		}
		if(!c)
		{
			cout << "Funny" << endl;
		}
	}
}
