#include<iostream>
#include<algorithm>
using namespace std;
int hourglass(int a[][6])
{ int sum[16]={0},k=0;
	for(int i=0;i<4;i++)
	 for(int j=0;j<4;j++)
	  {
	  
	  	sum[k]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
	  	k++;
	  	
	   }
	   sort(sum,sum+16);
	  return sum[15];
}
int main()
{
	int a[6][6];
	for(int i=0;i<6;i++)
	 for(int j=0;j<6;j++)
	  cin>>a[i][j];
	int result=hourglass(a);
	cout<<result;
	return 0;
}
