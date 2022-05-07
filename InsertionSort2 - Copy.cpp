#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int a[], int n)
{
	for(int i = 0 ;i< n; i++)
	{
		int val = a[i];
		int hole = i;
		while(hole > 0 && a[hole-1] > val)
		{
			a[hole] = a[hole-1];
			hole--;
		}
		a[hole] = val;
	}
}
int main()
{
	int n;
	cin>> n;
	int a[n];
	for(int i = 0 ;i< n; i++)
	cin >> a[i];
	
	InsertionSort(a, n);
	
	for(int i =0 ;i < n; i++)
	cout<< a[i] << " ";
	return 0;
}
