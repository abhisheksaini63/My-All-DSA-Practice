#include<bits/stdc++.h>
using namespace std;
int minpoweroftwo(int n){
	int x= 0;
	while((1<<x) <= n) x++;
	
	return x-1;
}
int countSetBits(int n)
    {
    	if(n == 0) return 0;
        int x = minpoweroftwo(n);
        
        int b = x * (1<<(x-1));
        int m = n - (1<< x) + 1;
        int r = m -1;
        
        int ans = b + m + countSetBits(r);
        return ans;
    }
    

    
int main(){
	int n;
	cin >> n;
	int ans = countSetBits(n);
	cout << ans << endl;
	return 0;
}
