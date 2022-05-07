#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s[]={"MH04CC2","MH04C2820","MH04BB3232","MH04CC2113", "MH04CC2878", "MH04BB8", "MH04CC2888", "MH04CC1313", "MH04CC2222", "MH04C1201", "MH04CC555", "MH04C6565", "MH04A7"};
	int b,count=0;
	string a;
	cin>>b>>a;
		if(b>2)
		cout<<"INVALID INPUT";
		else if(b==1)
		{
				for(int i=0;i<14;i++)
				{
					if(s[i]==a)
					{
						cout<<"CAR PARKED AT POSITION:"<<count;
						break;
					}
					else 
					count++;
			}
		}
		else if(b==2)
		{
			for(int i=0;i<14;i++)
				{
					if(s[i]==a)
					{
						cout<<"CAR POSITION:"<<count;
						break;
					}
					else 
					count++;
			if(count>14)
			cout<<"CAR DOES NOT EXIST:"<<a;
		}
}}



