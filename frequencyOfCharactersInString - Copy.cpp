#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >>s ;
	vector<int> fe (26);
	
	for(auto ch: s) 
	fe[ch - 'a']++;
	int singal = 0 , couple = 0 ;
	for(int a : fe)
	{
		if(a == 1) singal++;
		if(a % 2 == 0) couple += a/2;
		if(a > 3 && (a&1) ) couple += (a-3 )/2;
	}
	if(couple >= singal)
	cout << " yes" << endl;
	else 
	cout << "no" << endl;
}
