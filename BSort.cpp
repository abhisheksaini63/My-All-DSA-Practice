#include<iostream>
//#include<algorithm>
using namespace std;
void bubbleSort(int a[],int N)
{
	int temp;
	for(int i=1;i<=N-1;i++)
	 for(int j=0;j<=N-1-i;j++)
	   if(a[j]>a[j+1])
	   {
	   	temp=a[j];
	   	a[j]=a[j+1];
	   	a[j+1]=temp;
	   }
	   
}

int main()
{
	int a[]={1,5,76,423,1,3,765,46,436,428,666};
//	sort(a,a+11);
	bubbleSort(a,11);
	for(int i=0;i<=10;i++)
	cout<<a[i]<<" ";
	
	return 0;
}
