#include<bits/stdc++.h>
using namespace std;
void getMinMax(long long a[], int n) {
    pair<long long , long long > p;
    long long mx = *max_element(a, a+n);
    long long mn = *min_element(a, a+n);
    
    
    p = make_pair(mx , mx);
    p = make_pair(mn, mn);
    
    pair<long long , long long > :: iterator elm = p.first;
    while(elm != p.end()){
    	cout << elm->first<<" " << elm->second <<endl;
	}
    
}

int main()
{
	long long int n;
	cin >> n;
	long long int a[n];
	for(long long int i = 0 ;i < n; i++){
		cin >> a[i];
	}
	
	return 0; 
}
