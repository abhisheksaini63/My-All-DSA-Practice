#include<iostream>
#include<string>
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
		int ans = 0;
		int k = s.length()/2;
		int j = 1;
		if(s.length()%2 == 0)
		{																					
			for(int i = k  ; i< s.length() ;i++)
			{
				if(s[k-j]!= s[i])
				{
					int dif= abs((int)(s[k-j]-s[i]));
				
					ans+= dif;
				}
				j++;
			}
		}
		
		
		if(s.length()%2 != 0)
		{																					
			for(int i = k+j  ; i< s.length() ;i++)
			{
				if(s[k-j]!= s[i])
				{
					int dif= abs((int)(s[k-j]-s[i]));
					
					ans+= dif;
				}
				j++;
			}
		}
		
		cout << ans <<endl;
		
		
	}
}
