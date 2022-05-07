#include<iostream>
using namespace std;
void Quick(int a[], int beg, int end, int *loc)
{
	*loc=beg;
	int left=beg, right=end;
	while(left!=right)
	{
		if(*loc<right)
		{
			while(a[*loc]<=a[right]&&*loc!=right)
			right--;
			if(a[*loc]>a[right])
			{
				int temp;
				temp=a[*loc];
				a[*loc]=a[right];
				a[right]=temp;
				*loc=right;
			}
		}
		
		if(*loc>left)
		{
			while(a[*loc]>=a[left]&&*loc!=left)
			left++;
			if(a[*loc]<a[left])
			{
				int temp;
				temp=a[*loc];
				a[*loc]=a[left];
				a[left]=temp;
				*loc=left;
			}
			
		}
	}

}

void Quick_sort(int a[], int n)
{
	int beg=0,end=n-1,loc=beg;
	int l[10],u[10],top=-1;
	top++;
	l[top]=beg;
	u[top]=end;
	while(top!=-1)
	{
		beg=l[top];
		end=u[top];
		top--;
		Quick(a,beg,end,&loc);
		if(loc-1>beg)
		{
			top++;
			l[top]=beg;
			u[top]=loc-1;
		}
		
		if(loc+1<end)
		{
			top++;
			l[top]=loc+1;
			u[top]=end;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the No. of values =>";
	cin>>n;
	int a[n];
	cout<<"\nEnter the values =>";
	for(int i=0;i<n;i++)
	cin>>a[i];
	Quick_sort(a,n);
	cout<<"\nSorted array is =>";
	for(int j=0;j<n;j++)
	cout<<a[j]<<" ";
	return 0;
}
