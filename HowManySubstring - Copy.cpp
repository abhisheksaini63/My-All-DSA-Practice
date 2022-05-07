#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, q;
	cin>> n>> q;
	string a;
	cin >> a;
	
	for(int i = 0 ;i < q ;i++)
	{
		int ans = 0;
		int l , r;
		cin >> l >> r;
		
		int d = r-l+1;
		for(int j = d ;j>= 1;j--)
		ans += j;
		cout<< ans << endl;
	}
	return 0;
}
