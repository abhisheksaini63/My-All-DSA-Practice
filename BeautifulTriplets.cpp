#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n, d; 
	cin >> n >> d;
	
	int count = 0;
	int a[n] ;
	for(int i = 0 ; i< n ;i++)
	cin >> a[i];
	
	for(int i = 0 ;i < n; i++)
	{
//		if(!(binary_search(a+i , a+n, a[i]+d)) ) break;
		
		{
			
			int n1 = a[i];
			int k = a[i]+d;
			int lowb = lower_bound(a+i , a+n , k)-a;
			int n2 = a[lowb];
			int val = n2+d;
			int lb2 = lower_bound(lowb+a, a+n, val)-a;
			int n3 = a[lb2];
			
			int sub1 = n3 - n2  ;
			int sub2 = n2 - n1;
			
			if(sub1 == d && sub2  == d )
			count++;
			
		}
	}
	
	cout << count << endl;
	
}
//
//7 3             arr[] size n = 7, d = 3
//1 2 4 5 7 8 10  arr = [1, 2, 4, 5, 7, 8, 10]
