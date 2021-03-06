#include<bits/stdc++.h>
using namespace std;
int partition (int a[], int l, int r)
{
	int pivot = a[r];
	int i = l - 1;
	for(int j = l ; j < r; j++)
	{
		if(a[j]  <= pivot)
		{
			i++;
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	
	int t = a[i+1];
	a[i + 1] = a[r];
	a[r] = t;
	
	return i+1;
}

void QuickSort(int a[],  int l, int r)
{
	if(l >= r)
	return ;
	
	int p = partition(a, l, r);
	QuickSort(a, l, p - 1);
	QuickSort(a, p + 1, r);
}


int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ;i< n; i++)
	cin>> a[i];
	
	QuickSort(a, 0, n -1);
	
//	cout<< "After the sorting array is =>>>> ";
//	
//	for(int i = 0 ;i < n; i++)
//	{
//		cout << a[i] << " ";
//	}

	int sum = a[n-1] + a[n-2] ;
	cout << sum << endl;
}
