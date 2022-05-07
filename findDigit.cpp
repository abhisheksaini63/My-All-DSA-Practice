#include<iostream >
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,count=0, d,r;
		cin>>n;
		r=n;
		while(r>0)
		{
			d= r%10;
			if(d>0)
			if( n%d == 0 )
			{
				count++;
			}
			r=r/10;
		}
		cout<<count<<endl;
	}
	return 0;
}
