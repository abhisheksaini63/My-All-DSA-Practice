#include<stdio.h>
int main()
{
	int a,b,c;
	int *p,*k;
	printf("Enter two numbers = ");
	scanf("%d%d",&a,&b);
	p=&a;
	k=&b;
	c=*p+*k;
	printf("\nSum of %d and %d is = %d",a,b,c);
	return 0;
}
