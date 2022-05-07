#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int k;
	cin >> k;
	if(k > 26 )
	 k = k%26;
	
	for(int i = 0 ;i <n ;i++)
	{
		if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
		{
			
			int cu = (int)s[i]+k;
			if(s[i]>=65 && s[i]<=90 && cu >90)
			{
				s[i] = (char)((int)s[i]+k-90+65-1);
			}
			else if(s[i]>=97 && s[i]<=122 && cu >122)
			{
				s[i] = (char)((int)s[i]+k-122+97-1);
			}
			else 	
			s[i] = (char )((int) s[i] + k);
			
//			if(s[i] == 'x')
//			s[i] = (char)((int)s[i]+k-122+97-1);
//			else if(s[i] == 'X')
//			s[i] = (char)((int)s[i]+k-90+65-1);
//			
//			else if(s[i] == 'z')
//			s[i] = (char)((int)s[i]+k-122+97-1);
//			else if(s[i] == 'Z')
//			s[i] = (char)((int)s[i]+k-90+65-1);
//			
//			else if(s[i] == 'y')
//			s[i] = (char)((int)s[i]+k-122+97-1);
//			else if(s[i] == 'Y')
//			s[i] = (char)((int)s[i]+k-90+65-1);
		
		}
	}
	cout << s;
	return 0;
}
