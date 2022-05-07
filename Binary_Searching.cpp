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
	int l,r,f,m;
	l=0;
	r=n-1;
	cout<<"Enter the number to find =";
	cin>>f;
	sort(a,a+n);
	while (l!=r)
	{
		m=(l+r)/2;
		if(a[m]==f)
			{
				break;
			}
		
		if(f<a[m])
		r=m-1;
		
		if(f>a[m])
		l=m+1;		
	}
	
	if(a[m]==f)
		cout<<"Successfull find at position ="<<m;
	else 
	cout<<"Item not found ";
		return 0;
}
