#include<iostream>
using namespace std;
int getPrime(int p)
{
	int n = 100001;
	int a[n+1];
	int prime[n+1];
	for(int i = 0 ;i <=n ;i++)
	{
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;
//	
//
//	for(int i = 0 ;i <n ;i++)
//	cout << a[i] << " ";
//	cout << endl;	
//	
	for(int i = 2 ;i*i <= n; i++)
	{
		if(a[i])
		for(int j = i*i ; j<= n; j += i)
		{
			a[j] = 0 ;
		}
	}
	

	
	int count = 0 ;
	for(int i = 0 ;i <= n ;i++)
	{
		if(a[i]) {
		prime[count++]= i;
		}
	}
	return prime[p-1];
}
int main()
{
	
	int t; 
	cin >> t;
	while(t--)
	{
	int n;
	cin >> n;
	 cout << getPrime(n) << endl; 
	
	}
	
	return 0;
}

