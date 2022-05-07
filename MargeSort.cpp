#include<bits/stdc++.h>
using namespace std;
void marge(int *l,int nl, int *r, int rl, int *a)
{
	int i = 0 , j = 0 , k = 0;
	
	
	while(i < nl && j < rl)
	{
		if(l[i] <= r[j])
		{
			a[k] = l[i]; i++;
		}
		else 
		{
			a[k] = r[j]; j++;
		}
		
		k++;
	}
	
	while(i < nl)
	{
		a[k] = l[i]; i++; k++;
	}
	
	while(j < rl)
	{
		a[k] = r[j] ; j++; k++;
	}
}

void margeSort(int *a, int n)
{
	//cout << "Start" << endl;
	
	if(n < 2) return ;
	int mid = n/2;
	
	int left[mid];
	int right[n-mid];
	int i = 0 , j = 0;
	for(i = 0 ;i < mid ;i++)
	{
		left[i] = a[i];
	}
	
	for( j = mid; j< n; j++)
	{
		right[j - mid] = a[j];
	}
	margeSort(left, mid);
	margeSort(right, n-mid);
	marge(left, mid,  right, n- mid, a);
//	cout << " End " << endl;
}

int main()
{
	int n; 
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	cout << endl;
	
	margeSort(a,n);
	
	for(int i = 0 ; i < n; i++)
	cout << a[i] << " " ;
	cout<< endl;
	
	return 0;	
}
