#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	string s[n];
	string a[n];
	for(int i = 0 ;i< n; i++) cin >> s[i];
	
	a[0] = s[0];
	
//	sort(s,s+n);
	for(int i = 1 ;i< n; i++) 
	{
		int l1 = s[i].length();
		for(int j= i; j>= 0; j--)
		{
			int l2 = a[j-1].length();
			if(l1 <l2)
			{
				a[j] = a[j-1];
				a[j-1] = s[i];
				
			}
			else if(l1 == l2)
			{
				if(s[i][l1-1] < a[j-1][l2-1])
				{
					a[j] = a[j-1];
					a[j-1]= s[i];
				}
				if(s[i][l1-1] >= a[j-1][l2-1])
				{
					a[j] = s[i];
				}
			}
			else
			{
				a[j] = s[i];
			}
		}		
	}
	for(int i = 0 ; i< n ;i++) cout << a[i] << " " ;
	return 0;
}
