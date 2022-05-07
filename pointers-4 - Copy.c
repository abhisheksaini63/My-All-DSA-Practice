#include<stdio.h>
int main()
{
	int a[10],*p,i,j;
	printf("Enter 10 elements =");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	p=&a;
	printf("\nYou Entered =");
	for(j=0;j<10;j++)
	printf("%d ",*(p+j));
	return 0;
}
