#include<bits/stdc++.h>
using namespace std;
int solve(int N, int K, vector<int> a) {
        // code here
        int cnt = 0, acnt =0 , ind= 0;
        for(int i = 0 ;i< N-K; i++){
            int t = i;
            for(int j = 0; j < K ;j++){
                if(a[i] > a[++t]){
                    cnt = 1;
                }
                else {
                    cnt = 0;break;
                }
            }
            if(cnt){
                acnt++;
            }
            ind++;
        }
        bool flag = true;
        for(int i = ind ;i < N-1 ;i++){
            for(int j = i+1; j< N; j++){
                if(a[i] > a[j]) flag = true;
                else {
                    flag = false; break;
                }
            }
            if(flag){
                acnt++;
            }
        }
        
        return acnt+1;
        
    }
    
    int main(){
    	int t ;
    	cin >> t;
    	while(t--){
    		int n , k;
    	cin>> n>>k;
    	
    	vector<int> a(n);
    	for(int i = 0 ;i < n;i++) cin >> a[i];
    	int res = solve(n, k, a);
    	cout << res;
		}
	}
