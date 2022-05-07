#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cout<<n<<endl;
	int k=a[0],count=0,i=0;
	for(int i=0;i<n;i++)
	{
		while(k==a[i] && i<n)
		{
			count++;
			i++;
		}
		k=a[i];
		i--;
		
		if(count!=6)
		cout<<n-count<<endl;			// 2 2 4 4 5 8 
		
	}

}
