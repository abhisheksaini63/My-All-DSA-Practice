#include<bits/stdc++.h>
using namespace std;
int  findTeams(int  g,int  t)
{
	
	if(g * 2 >= t)
	{
		return 0;
	}
	else if(g*2 <  t)
		{
			return  t - g*2; 
		}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int g, t;
	cin >> g >>t;
	cout << findTeams(g,t) << endl;
	return 0;
}
