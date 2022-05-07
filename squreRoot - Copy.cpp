#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int n,m;
		cin>>n>>m;
		float fln=sqrt(n);
		float flm=sqrt(m);
		int inn=fln;
		int inm=flm;
				
		int count=inm-inn;
		if(((inn==fln)&& (inm==flm))||((inn==fln)&& (inm!=flm)))
		cout<<count+1<<endl;
		else
		cout<<count<<endl;
	}
	
}
