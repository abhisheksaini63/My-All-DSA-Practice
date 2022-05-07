#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  
  int n,i,j,r,sum=0,L=0,R=0,dig=0;
  scanf("%d", &n);
  if(n>1&&n<10)
    dig=1;
  else if(n>9&&n<100)
    dig=2;
  else if(n>99&& n<1000)
    dig=3;
  
  r=n*n;
  
  for(j=0;j<dig;j++)
   {
   	i=r%10;
   	sum+=pow(10,j)*i;
   	r=r/10;
   	
   }
   sum+=r;
  if(sum==n)
    printf("1");
  else
    printf("0");
  
}  

