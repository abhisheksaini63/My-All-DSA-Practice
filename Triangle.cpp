#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isvalid(int a, int b, int c){
    return a+b>c;
}

int main()
{  int n;
cin >>n;
    vector<int> v(n);
    for(int i = 0; i<n; ++i){
    cin>>v[i];
    }

    sort(v.begin(),v.end());

    for(int i = 2; i<n; ++i){
      if(isvalid(v[i], v[i-1], v[i-2])){
        cout<<v[i]<<" "<<v[i-1]<<" "<<v[i-2]<<endl;
        return 0;
      }
    }
cout<<-1<<endl;
return 0;
}

