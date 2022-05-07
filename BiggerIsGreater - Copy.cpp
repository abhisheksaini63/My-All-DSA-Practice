#include<bits/stdc++.h>
#include<string>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int count = 0;
		for(int i = s.length()-1; i >=0; i--)
		{
			for(int j = i-1 ; j>= 0 ;j--)
			{
				if(s[j] < s[i])
				{
					if(i==0 || j==0)
					{
						swap(s[i],s[j]);
						sort(s.begin()+1, s.end());
						//cout << "sorting complete" << endl;
						count++;
						break;
					}
					else
					{
						swap(s[i], s[j]);
						sort(s.begin()+j+1, s.end());
						count++;
						break;
					}
				}
			}
			if(count)
			{
				cout << s << endl;
				break;
			}
		}
		
		if(!count)
		cout << "no answer" << endl;
	}
}
