#include<stdio.h>
void foo1(int xval)
{
	int x;
	x=xval;
	printf("Adress of x is =%d",&x);
	printf("\nThe value of x is =%d",x);
}
void foo2(int dummy)
{
	int y=dummy;
	printf("\nAdress of y is =%d",&y);
	printf("\nThe value of y is =%d",y);
}

int main()
{
	foo1(7);
	foo2(11);
	return 0;
}

