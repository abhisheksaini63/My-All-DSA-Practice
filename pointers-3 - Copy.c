#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	printf("Enter two numbers =");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(*p1==*p2)
	printf("\nBoth are equal");
	else if(*p1>*p2)
	printf("\n%d is greater than %d",*p1,*p2);
	else 
	printf("\n%d is less than %d",*p1,*p2);
	
}
