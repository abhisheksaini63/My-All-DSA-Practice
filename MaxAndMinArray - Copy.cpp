#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ;i< n;i++)
	cin>>a[i];
	
	int *mx = max_element(a,a+n);
	cout << *mx << endl;
	
	int *mn = min_element(a,a+n);
	cout << *mn << endl;
	return 0;
}
