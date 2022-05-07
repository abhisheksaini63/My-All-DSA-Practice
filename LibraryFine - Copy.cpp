#include<iostream>
using namespace std;
int main()
{
	int d1,m1,y1;
	int d2,m2,y2;
	
	cin>>d1>>m1>>y1;
	cin>>d2>>m2>>y2;
	
	if((d1<d2&&m1<=m2&&y1<=y2) || (d1<=d2&&m1<m2&&y1<=y2) || (d1<=d2&&m1<=m2&&y1<y2))
	cout<<"0";
	
	else if(y2<y1)
	{
		cout<<"10000";
	}
	else if(m1>m2 && y2==y1)
	{
		int d=m1-m2;
		cout<<d*500;
	}
	else
	{
		int d=d1-d2;
		cout<<d*15;
	}
	return 0;
}
