#include<iostream>
using namespace std;
int Quick(int a[],int beg,int end )
 {
 	int loc=beg;
 	int t=1,left=beg;
 	int right=end;
 	while(left!=right)
 	{  
 		if(t==1)
		 {
		 	while(a[right]>a[left])
			  right--;
			  
			if(loc==right)
			 return loc;
		 	 
		 	 int temp=a[right];
		 	 a[right]=a[left];
		 	 a[left]=temp;
		 	 loc=right;
		 	 t=2;
		 }	
		 
		 else
		 {
		 	while(a[left]<a[right])
		 	  left++;
		 	  
		 	if(loc==left)
			 return loc;
		 	
		 	int tem=a[left];
		 	a[left]=a[right];
		 	a[right]=tem;
		 	loc=left;
		 	t=1;
		 }
	}
	return loc;
 }
 
 void QuickSort(int a[],int n)
  {
  	int l[10],u[10];
  	int top=-1;
  	int beg=0;
  	int end=n-1;
  	int loc=0;
  	top++;
  	l[top]=beg;
  	u[top]=end;
  	while(top!=-1)
  	{
  		beg=l[top];
  		end=u[top];
  		top--;
  		
  		loc=Quick(a,beg,end);
  		
  		if(beg<loc-1)
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
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	
	cout<<"Normal array ";
	for(int j=0;j<n;j++)
	cout<<a[j]<<" ";
	cout<<endl;
	
	
	QuickSort(a,n);
	cout<<"Sorted array ";
	for(int j=0;j<n;j++)
	cout<<a[j]<<" ";
	return 0;

}
