#include<bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n) {
        sort(arr, arr+n);
        set<int> a;
        for(int i = 1; i< n;i++){
            if( arr[i] == arr[i-1]) {
                a.insert(arr[i]);
            }
        }
        if(a.size() == 0 ){
        	vector<int> ans ;
        	ans.push_back(-1);
        	return ans;
		}
        vector<int> ans ;
        for(auto val : a){
            ans.push_back(val);
        }
        return ans;
        // code here
    }
    
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ;i< n;i++) cin >> a[i];
	
	vector<int> ans = duplicates(a,n);
	
	for(int i = 0 ;i < ans.size();i++){
		cout << ans[i] << " ";
	}
	return 0;
}
