#include<bits/stdc++.h>
using namespace std;
int peakElement(int a[], int n)
{
    if(a[0] > a[1]) return 1;
    else if(a[n-1] > a[n-2]) return 1;
    else {
        for(int i = 1; i< n -1 ;i++){
            if(a[i] > a[i+1] && a[i] > a[i-1]) return 1;
        }
        return 0;
    }
    return 1;
   // Your code here
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ;i< n;i++) cin >> a[i];
	
	int ans = peakElement(a, n);
	
	cout << ans <<endl;
	return 0;
}
