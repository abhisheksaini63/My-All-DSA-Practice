#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long int ;
ll leftsum (ll ar[], int n)
{
	ll sum = 0;
	for(int i = 0 ;i< n;i++)
	sum += ar[i];
	
	return sum;
}

ll rightsum (ll ar[], int n)
{
	ll sum = 0;
	for(int i = 0 ;i< n;i++)
	sum += ar[i];
	
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		n +=1;
		ll a[n];
		int count = 0;
		for(int i = 1 ;i <n ;i++) cin >> a[i];
		a[0] = 0;
		if(n ==1 || n==2) cout <<"NO" <<endl;
		else
		{
			for(int i = 1; i< n-1; i++)
			{
				ll lsum = leftsum(a,i) ;
				ll rsum = rightsum(a+i+1,n-i-1);
				
				if(lsum == rsum )
				{
					cout << "YES" <<endl;
					count++;
					break;
				}
			}
			
			if(count == 0) 
			cout << "NO" << endl;
		}
		
	}
}
