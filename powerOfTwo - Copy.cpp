#include<bits/stdc++.h>
using namespace std;
 bool isPowerofTwo(int n)
{
    if (n == 0)
        return 0;
    if ((n & (~(n - 1))) == n)
        return 1;
    return 0;
}

long countPairs(vector<int> arr) {
    long ans = 0 ;
    int n = arr.size();
    for(int i = 0 ;i < n-1;i++){
        for(int j = i +1 ;j < n ;j++){
            long long an = (arr[i] & arr[j]);
            if(isPowerofTwo(an)) ans++;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n ;
		cin >> n;
		vector<int> v(n);
		for(int i = 0 ;i < n;i++){
			cin >> v[i];
		}
		
		long ans = countPairs(v);
		cout << ans << endl;
	}
	return 0;
}
