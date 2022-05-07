#include<stdio.h>
#include<conio.h>
void Bubble_sort(int [], int);
void Bubble_sort(int a[], int n)
{
	int i,j, temp;
	for( i=0;i<n-1;i++)
	 for( j=0;j<n-1-i;j++)
	  if(a[j]>a[j+1])
	    {
	    	 temp=a[j];
	    	 a[j]=a[j+1];
	    	 a[j+1]=temp;
		}
}
void main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0 && a[i]%3!=0)
		 {
		 	b[count]=a[i];
		 	count++;
		 }
		 
		if(a[i]%2!=0 && a[i]%3==0)
		 {
		 	b[count]=a[i];
		 	count++;
		 }
	}
	
	Bubble_sort(b,count+1);
	
	for(i=0;i<=count;i++)
	 printf("%d ",b[i]);
	
}
