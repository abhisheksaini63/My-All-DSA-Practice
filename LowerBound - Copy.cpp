#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main()
{
    int d,n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    cin>>d;
    for(int j=0;j<d;j++)
    {
        int s;
        cin>>s;
        for(int j=0;j<a.size();j++)
        {
            auto it = find (a.begin(),a.end(),s);
            int index=it-a.begin()+1;
            if(index==a.size()+1)
            {
            	int l=0;
            	while(a[l]<=s)
            	l++;
            	cout<<"No "<<l+1<<endl;
            	break;
			}
			else
			{
				cout<<"Yes "<<index<<endl;
				break;
			}
            
        }
        
    }
    return 0;
}

