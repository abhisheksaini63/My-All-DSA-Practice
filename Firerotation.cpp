#include <iostream>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	int a[n], r = 0 ;
	for(int i = 0 ; i < n ;i++)
	{
		cin >> a[i];
		
	}

	for(int i = 0 ;i< n-1; i++)
	{
		if(a[i]%2 ==1)
		{
			a[i] +=1;
			a[i+1] += 1;
				r+=2;
		}
	}

	if(a[n-1] %2 == 1)
		cout << "NO" ;
	else
	{
		cout << r<< endl;
	}


	

	return 0;


}