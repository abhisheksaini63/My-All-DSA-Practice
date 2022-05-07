#include<iostream>
#include<utility>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	int a[n];
	  int pivot ;                                // 4 5 3 7 2
	for(int j = 0 ; j < n ;j++ ) cin >> a[j];
	pivot = 0;
	for(int i = 1 ; i< n ;i++)
	{
		if(a[i] < a[pivot])
		{
			for(int j = i ; j > pivot;  j--)
			{
				swap(a[j], a[j-1]);
			}
			pivot++;
		}
	}
	
	
	for(int i =0 ; i< n ;i++) cout << a[i] << " " ;
	
	
	return 0;
	

}
