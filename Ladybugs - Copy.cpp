#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string happyLadybugs(string b) {
    int l=count(b.begin(), b.end(), '_');
    int ans1=0,ans2=0, n=b.size();
    if(l==0){
        for(int i=0; i<n-l; i++){
            if(b[i]==b[i-1] || b[i]==b[i+1]) ans2++;
        }
    if(ans2==n) return "NO";
    else return "YES";
    }
    sort(b.begin(),b.end());
    for(int i=0; i<n-l; i++){
        if(b[i]==b[i-1] || b[i]==b[i+1]) ans1++;
    }
    if( ans1==n-l) return "NO";
    else return "YES";
}
int main()
{
    int t;
    cin >> t;
    while(t--){
    	string s ;
		cin >> s;
		cout << happyLadybugs(s)  << endl;
}
return 0;
}

