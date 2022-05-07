#include<iostream>
using namespace std;
int main()
{
	int a[10]={9,8,7,6,5,4,3,2,1,0};
	int temp,j;
	for(int i=1;i<10;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0&&temp<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=temp;
	}
	for(int k=0;k<10;k++)
	cout<<a[k]<<" ";
	return 0;	
}
