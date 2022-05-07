#include<iostream>
#include<utility>
using namespace std;


int main()
{
	int n; 
	cin >> n;
	int a[n];
	for(int i = 0 ; i< n; i++) cin >> a[i];
	
	
	for(int i = 1 ; i< n ;i++)
	{
		if(a[i] < a[i-1])
		{
			for(int j = i; j>=0; j--)
			{
				if(a[j-1]>a[j])
				{
					swap(a[j-1], a[j]); 
				}
			}
		}
		for(int k = 0 ;k< n ;k++) cout << a[k] << " " ;
		cout << endl;
	}
	return 0;
}
