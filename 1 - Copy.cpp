#include<iostream>
using namespace std;
int main()
{
	
	int a[10];
	cout<<"\nEnter the values= ";
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"You entred= ";
	for(int e:a )
	cout<<e<<" ";
	return 0;
}
