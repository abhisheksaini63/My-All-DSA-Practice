#include<iostream>
using namespace std;
int main()
{
	int a[4][4],sum=0,r2=0,r3=0,r4=0,d1=0,d2=0;
	cout<<"Enter the 4*4 magic square matrix=\n";
	for(int i=0;i<4;i++)
	 for(int j=0;j<4;j++)
	  {
	  	cin>>a[i][j];
	  	//cout<<endl;
	  }
	 
	 for(int i=0;i<4;i++)
	  for(int j=0;j<4;j++)
	  {
	  	if(i==0)
	  	sum+=a[i][j];
	  	else if(i==1)
	  	r2+=a[i][j];
	  	else if(i==2)
	  	r3+=a[i][j];
	  	else 
	  	r4+=a[i][j];
	   } 
	d1=a[0][0]+a[1][1]+a[2][2]+a[3][3];
	d2=a[0][3]+a[1][2]+a[2][1]+a[3][0];
	if(sum==r2&&sum==r3&&sum==r4&&sum==d1&&sum==d2)
	cout<<"\nIt is a magic square ";
	else 
	cout<<"\nIt is not a magic square";
}
