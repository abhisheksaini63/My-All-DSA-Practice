#include<iostream>
using namespace std;
int main()
{
	int a[5],sum=0,avg;
	cout<<"Enter any 5 numbers=";
	for(int i=0;i<5;i++)
	cin>>a[i];
	for(int j=0;j<5;j++)
	sum+=a[j];
	cout<<"\n Sum is ="<<sum;
	avg=sum/5;
	cout<<"\n average is ="<<avg;
	return 0;
}
