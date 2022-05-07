#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ;i < n; i++) cin >> a[i];
	
	sort(a, a+n);
	
	int target = 4+ a[0];
	int ans = 0;
	
	for(int i = 0 ; i< n; i++)
	{
		if(a[i]>target)
		{
			ans++;
			target = a[i]+4;
		}
	}
	
	cout << ans+1 <<endl;
}
