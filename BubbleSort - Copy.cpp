#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n)
{
	for(int k = 0; k < n; k++)
	{
		int flag = 0 ;
		for(int i = 0 ; i < n-k-1; i++)
		{
			if(a[i] >= a[i+1])	
			{
				int temp = a[i];
				a[i]  = a[i+1];
				a[i+1] = temp;
				
			}
			flag =1;
		}
		if(flag == 0)
		break;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n ; 
	cin >> n;
	int a[n];
	for(int i =0 ; i< n; i++)
	cin >> a[i];
	BubbleSort(a, n);
	for(int i = 0 ;i< n; i++)
	cout << a[i] << " ";
	return 0;
	
}
