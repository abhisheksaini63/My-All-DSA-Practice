#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using inte = long long int ;
using namespace std;
int main()
{
	int n ;
	cin>> n;
	inte a[n];
	for(int i = 0 ;i< n; i++) cin >> a[i];
	
	sort(a, a+n,greater<int>());
	
	inte sum = 0;
	for(int i = 0 ;i< n; i++)
	{
		sum += pow(2,i)* a[i];
	}
	cout << sum <<endl;
	return 0;
}
