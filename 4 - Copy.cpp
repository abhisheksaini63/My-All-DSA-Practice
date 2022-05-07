#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector <int> a(5);
	cout<<"Enter any five numbers = ";
	for(int i=0;i<5;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	cout<<"The smallest number is = "<<a[0];
	return 0;
}
