#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int count = 0;
	for(int i = 0 ;i< n; i++) cin >> a[i];
	if(n ==1 )
	cout<< a[0];
	else
	{
		sort(a,a+n);
		for(int i = 1 ;i< n-1;i++)
		{
			if(a[i] != a[i+1] && a[i-1] != a[i])
			{
				count++;
				cout << a[i];
				break;
			}
		}
		if(count ==0)
		cout << a[n-1];
	}
	return 0;
}
