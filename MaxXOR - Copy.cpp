#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int l, r;
	cin >> l>> r;
	int m  = 0;
	
	for(int i = l ;i<= r; i++)
	{
		for(int j = i ;j<=r ;j++)
		{
			int x = i^ j ;
			if(m < x)
			m = x;
		}
	}
	cout << m << endl;
	return 0;
}
