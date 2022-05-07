#include <iostream>
#include<math.h>
#define macro int long long;
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n,r,count=0;
		cin>>n;
		r=n;
		if(n%2==0)
		{
			while(r>0)
		{
			if(r%2==0)
			{
				r=r/2;
				count++;
			}
			else
			break;
		}
		if(r==1)
		cout<<count-1<<endl;
		else
		cout<<"0"<<endl;
		}
		else
		cout<<"0"<<endl;
	}
}
	
