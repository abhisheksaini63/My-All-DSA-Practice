#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition (int a[], int l, int r)
{
	int i= l -1;
	int pivot = a[r];
	for(int j = l ; j < r ; j++)
	{
		if (a[j] <= pivot)
		{
			i += 1;
			swap(&a[i], &a[j]);
			//int temp = a[i];
			//a[i] = a[j];
			//a[j] = temp;
		}
	}
	swap(&a[i+1], &a[r]);
		//int tem = a[i + 1];
		//	a[i + 1] = a[r];
		//	a[r] = tem;
			
		return i+1;
}

void QuickSort (int a[], int l, int r)
{
	if(l < r)
	{
	int p = partition(a, l, r);
	QuickSort( a, l, p-1);
	QuickSort( a, p+1 , r);
	}
}

int binS(int a[],int n,  int target)
{
	int mid = 0;
	int l = 0;
	int r = n - 1;
	while( l <= r)
	{
		mid = (l +r)/2;
		if( a[mid] == target)
		return mid;
		else if (target > a[mid])
		l = mid + 1;
		else 
		r = mid - 1;
	} 
	return -1;
}

int main()
{
	int n, target;
	cout << "enter the size of array = " << endl;
	cin>> n;
	int a[n];
	cout <<" enter the values = " << endl;
	for (int i=0 ;i< n; i++)
	cin >> a[i];
	QuickSort(a, 0, n-1);
	//sort(a, a + n);
	cout << " Sorted array " << endl;
	for (int i =0 ;i < n; i++)
	cout << a[i] << " " ;
	cout<< endl;
	cout << "enter the target = ";
	cin >> target;
	int result = binS(a, n,  target);
	if (result == -1)
	cout << " Not found";
	else 
	cout << "Found Successfully at index = " << result;	
}
