#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int summ=0;
	long long sum=0;
	for(int j=n;j>=0;j--){
		int r=j;
	while (r!=0)
	{
		int re=r%10;
		switch(re)
		{
			case 0:
				sum+=1;
				break;
				
			case 1:
				sum+=1;
				break;
				
			case 2:
				sum+=2;
				break;
				
			case 3:
				sum+=6;
				break;
				
			case 4:
				sum+=24;
				break;
				
			case 5:
				sum+=120;
				break;
				
			case 6:
				sum+=720;
				break;
				
			case 7:
				sum+=5040;
				break;
				
			case 8:
				sum+=40320;
				break;
				
			case 9:
				sum+=362880;
				break;
				
			default:
				cout<<"invalid "<<endl;
		}
		r=r/10;
	}
	if(sum%j==0)
	summ+=j;
	}
	cout<<summ<<endl;
	
	return 0;
	
}
