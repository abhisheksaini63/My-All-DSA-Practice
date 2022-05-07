#include<stdio.h>
#include<conio.h>
#include<string.h>
int isprime(int n,int m)
{	int i,j;	
	i=n<m?n:m;
	for(j=2;j<=i;j++)
	if(n%j==0&&m%j==0)
	break;
	if(j==i+1)
	return 1;
	else
	return 0;
	return 0;
}

int main()
{
	int n,a,i,sum;
	scanf("%d",&n);
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	sum+=isprime(n,i);
	printf("%d",sum);
}
