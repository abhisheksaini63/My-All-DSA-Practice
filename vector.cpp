/*#include <iostream>
#include<vector>
#include 
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector <int >a(n);
    for(int i=0;i<a.size();i++)
    {
        int j;
        cin>>j;
        a.push_back(j);
    }
    for(int k=0;k<m;k++)
    {
        a.push_back(a[k]);
        a.pop_front();
        
    }
    for(int l=0;l<a.size();l++)
    cout<<a[l]<<" ";
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);//Insert element 1.
    v.push_back(2);//Insert element 2.

    //Now the vector(v) has 2 elements in it, with size 2

   // v.pop_front(); // This method will remove the first element

    cout<<v.end();
    //Prints [1]
    return 0;
}

