#include<stdio.h>
#include<conio.h>
void BubbleSort(int a[],int n)
{
	int round,i;
	for(  round=1;round<=n-1;round++)
	{
	 for( i=0;i<=n-1-round;i++)
	  if(a[i]>a[i+1])
	   {
	   	 int temp=a[i];
	   	 a[i]=a[i+1];
	   	 a[i+1]=temp;
	   }
	   
	}
}
void LargestFour(int arr[], int arrLength){
	int i=0,sum=0;
	BubbleSort(arr, arrLength);
	
	sum=arr[arrLength-1]+arr[arrLength-2]+arr[arrLength-3]+arr[arrLength-4];
	printf("%d",sum);
}

int main()
{
	int a[]={4,5,-2,3,1,2,6,6};
	int n=8;
	LargestFour(a,n);
	return 0;
}

