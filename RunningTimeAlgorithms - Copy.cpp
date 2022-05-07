#include<iostream>
#include<utility>
using namespace std;
int main()
{
	int t ;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	bool c = false;
	int a[n];
	for(int i =0 ;i< n;i++)cin >> a[i];
	int it =0 ;
	for(int i = 1 ;i< n; i++){	
		int j = i-1;
		int k = i;
		while(j>=0 && a[k]< a[j])									// 2 1 3 1 2      3
		{	
			swap(a[k],a[j]);
			j--;
			k--;
			it++;
		}
	
	}
	cout << it << endl ;
	}
	return 0;
}
