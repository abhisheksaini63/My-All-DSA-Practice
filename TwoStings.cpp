	#include<iostream>
	#include<algorithm>
	#include<vector>
	#include<string>
	using namespace std;
	int main()
	{
		int t ;
		cin >> t;
		while(t--)
		{
			string s;
			cin >>s;
			
			string d;
			int count = 0;
			cin >> d;
			vector<int> fs(26);
			vector<int> fd(26);
			
			for(char ch: s)fs[ch-'a']++;
			for(char ch: d)fd[ch-'a']++;
			
			for(int i = 0 ;i< 26 ;i++)
			{
				if(fs[i] > 0 && fd[i]> 0)
				{
					count++ ;
					cout << "YES" <<endl;
					break;
				}
			}
			if(count==0)
			{
				cout <<"NO" <<endl;
			}
		}
	}
