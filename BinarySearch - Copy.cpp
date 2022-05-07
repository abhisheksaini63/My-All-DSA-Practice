#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int BinarySearch(vector<int> &a,int item,int n)
{
	sort(a.begin(),a.end());
	cout<<"\nArray after sorting =";
	for(int j=0;j<a.size();j++)
	cout<<a[j]<<" ";
	int l,r,mid;
	l=0;
	r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==item)
		{
			cout<<"\n\nItem found at index ="<<mid;
			return 1;
		}
		else if(a[mid]<item)
		l=mid+1;
		else
		r=mid-1;
	}
	if(a[mid]!=item)
	{
			
		cout<<"\nItem has not found but";
		return 0;
	}
}
int main()
{
	int n,item,pos;
	cout<<"Enter the size of array =";
	cin>>n;
	vector <int > a(n);
	cout<<"\nEnter the values =";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nEnter a value that you want to search or insert =";
	cin>>item;
	if(BinarySearch(a,item,n)==0)
	{
		cout<<"\nPlease Enter the index =";
		cin>>pos;
		a.insert(a.begin()+pos,item);
		cout<<"inseert successfull";
		cout<<"\nAfter inserting ";
		for(int j=0;j<a.size();j++)
		cout<<" "<<a[j];
	}
	return 0;
}






