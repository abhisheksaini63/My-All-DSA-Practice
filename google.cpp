#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n,b,sum=0,k=0;
    cin>>n>>b;
    vector <int> a(n);
    for(int s=0;s<a.size();s++)
    cin>>a[s];
    sort(a.begin(),a.end());
    for(int j=0;j<a.size();j++)
    {
        sum+=a[j];
        if(sum<=b)
        k++;
        else
        break;
    }
    
    cout<<"Case #"<<i+1<<": "<<k;    
   }
return 0;
    
}







