#include<iostream>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;
int main()
{
	int n,p=0,score=0,count=0;
	
	//b-1 read the size
	
	cout<<"Enter the size of square matrix =";
	cin>>n;
	int a[n][n]={0};
	int sum[n]={0},coSum[n]={0},d1=0,d2=0,k;

	//b-2 print the blank matrix
	
	cout<<"\nHere the blank matrix of "<<n<<"*"<<n<<"is = \n";
	for(int i=0;i<n;i++)
	 {
	  for(int j=0;j<n;j++)
	  cout<<a[i][j]<<" ";
	  cout<<endl;
    }
    
	//b-3 set the values
    auto start=high_resolution_clock::now();
	while(1)
    {
    	cout<<"Enter the "<<n<<"*"<<n<<" magic square matrix=\n";
	    for(int i=0;i<n;i++)
    	{
		   for(int j=0;j<n;j++)
	        cin>>a[i][j];
        }
        int yes; //to confirmation of user
        cout<<"\nIf confirm press 1 otherwise 0\n";
        cin>>yes;
        if(yes)
        break;
        p++;
	}
	
	//b-4 calculate the score

	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)		
		{
			
		sum[i]+=a[i][j];	
		if(i==j)
	     d1+=a[i][j];
	    if(j==n-1-i)
	    d2+=a[i][j];
	   }
	
	for( k=1;k<n;k++)
	  if(sum[0]==d1&&sum[0]==d2)
	    {
	    	if(sum[0]==sum[k]);
	    	count++;
		}
	
   auto stop=high_resolution_clock::now();
   auto T=duration_cast<seconds>(stop-start);
	if(count==k-1)
	{
		score=T.count()+p*100 ;
		cout<<"\nYour score is ="<<score;
	}
	else
	cout<<"\nScore is 0";
return 0;	 

}
