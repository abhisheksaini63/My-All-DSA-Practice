#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n)
{
	for(int i = 0; i< n-1; i++)
	{
		int imin = a[i], k = i;
		for( int j = i+1 ; j < n ; j++)
		{
			if(imin >= a[j])
			{
				imin = a[j];
				k= j;
			}
		}
		
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >>t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ;i < n; i++)
		{
			cin >> a[i];
		}
		SelectionSort(a,n);
		for(int i = 0 ;i< n ;i++)
		cout << a[i] << " ";
	}
	return 0;
}

