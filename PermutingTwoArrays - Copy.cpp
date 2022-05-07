#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	int n, k;
	cin >> n >> k;
	long long int sum = 0;
	for(int i = 0 ;i< 2*n; i++)
	{
		int tn ; 
		cin >> tn; 
		sum+= tn;
	}
	if(sum >= k*n)
	cout << "YES" <<endl;
	else
	cout <<"NO" <<endl;		
	}
	return 0;
}
