#include<bits/stdc++.h>
using namespace std;
int isPossible(int N, int a[]){
        int sum = 0;
        for(int i = 0 ; i< N ;i++){
            int k = a[i];
            while(k > 0){
                sum += k%10;
                k = k/10;
            }
        }
        if(sum %3 == 0) return 1;
        else return 0;
        
        return 0;
        // code here
    }

int main(){
	int n ;
	cin >> n;
	int a[n];
	for(int i = 0 ; i< n;i++) cin>> a[i];
	
	
	int ans = isPossible(n, a);
	cout << ans << endl;
	
	return 0;
}
