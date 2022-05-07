#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 +10;
long long int ar[N];

int main(){
	int n , m;
	cin >> n >> m;
	
	while(m--){
		long long int a, b ,c;
		
		cin >> a >> b >> c;
		
		ar[a] += c;
		ar[b+1] -= c;
	}
	for(int i = 1; i <= n; i++) ar[i] += ar[i-1];
		
		long long int mx = -1;
		for(int i = 1; i<= n;i++ ){
			if(mx < ar[i]) {
				mx = ar[i];
			}
		}
		
		cout << mx << endl;
	return 0;
}
