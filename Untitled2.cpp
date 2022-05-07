#include<iostream>

int index(int a[],int n)
{
	int i=0;
    int j=0;
	int count=0;
	
  while(j>n)	
  {
  	
  	if(a[i]!=a[j] || i==j)
  	{
  		j--;
	  }
	  else{
	  	count++;
	  	j--;
	  }
	  if(count<2)
	  {
	  	return a[i];
	  }
	  i++;
	  
	  
  }
	
}
int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans =index(a,n);
}
