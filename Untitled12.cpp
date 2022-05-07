#include<bits/stdc++.h>
#include<vector>
#include<string>
using ll = long long int;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while (t--)
	{
		ll n, e, h, a, b, c;
		cin >> n >> e >> h>> a>> b>> c;
		ll mnO = 0, min = 0, order=0, count = 0;
		
		if(e <n && h < n)
		cout << -1 << endl;
		
		else if(e==n && h == n)
		{
			cout<< n*c << endl;
		}
		
		else
		{
			
			if(e == h && e >= n && h >= n)
			mnO = n;
			else if(e< h)
			{
				mnO = e + (h-e)/3;
			}
			else
			mnO = h + (e-h)/2; 
			
			if(min < n)
			{
				cout<< -1 << endl;
			}
			
			else
			{
				if (e <= n )
				{
					cost += e*c;
					order = e;
					e = 0;
					h = (h-e);
					while(h>= 3 && order < n)
					{
						order++ ; count++; h-=3;
					}
					if(count)
					{
						cost += count * b;
						count = 0;
					}
				}
				
				if (h <= n )
				{
					cost += h*c;
					order = h;
					h = 0;
					e = (e-h);
					while(e>= 2 && order < n)
					{
						order++ ; count++; e-=2;
					}
					if(count)
					{
						cost += count * a;
						count = 0;
					}
				}
				
				if(e > n && h > n)
				{
					for(int i = 0 ; i< 3 ; i++)
					{
						if(order >= n) break;
			
						else if(a<= b && a<= c)
						{			
							while(e>= 2 && order < n)
							{				
								count++ ; order++; e = e-2; 
							}
							if(count > 0)
							{
								cost += count *a;
								count = 0;
							}
							a= INT_MAX;
						}
						else if(b<=a && b<=c)
						{
							while(h>= 3 && order < n)
							{
								count++ ; order++; h = h-3;
							}
							if(count > 0)	
							{
								cost += count *b;
								count = 0;
							}
							b = INT_MAX;
						}
						else if(c<=a && c<= b)
						{
							while(h>=1 && e>=1 && order < n)
							{
								count++;
								order++;
								h--;
								e--;
							}
			 				if(count > 0)
							{
								cost += count *c;
								count = 0;
							}
							c = INT_MAX;
						}
					}
					cout << cost << endl;
				}
			}
		}
		
	}
}
