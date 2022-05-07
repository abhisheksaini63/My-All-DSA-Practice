#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<"Enter ten values= ";
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"\nEnter a number that you want to search = ";
	int s,j;
	cin>>s;
	for(j=0;j<10;j++)
	{
		if(a[j]==s){
		cout<<"your number index is = "<<j;
	    break;
		}
	    
	}
	if(j==10)
	cout<<"\nCould not found";
	return 0;
}
