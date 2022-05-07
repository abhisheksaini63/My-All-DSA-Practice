#include<bits/stdc++.h>
#define macro int long long ;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,co=0
		cin>>n;
		if(n<=3)
		cout << n; 
        else{ 
        co=co+3;
        for(int j = 4; j < n; j += 2) 
        { 
              
            // Consecutive even and  
            // odd numbers  
            cout << j << " " << j + 1 << "\n"; 
        } 
        if(n % 2 == 0) 
            cout << n << "\n";
		}
	}
}
