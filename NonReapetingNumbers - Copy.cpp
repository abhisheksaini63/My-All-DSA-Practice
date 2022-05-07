#include<bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> a;
        int size = nums.size() ;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < size-1; i++){
        	if(nums[i] < nums[i+1] && nums[i] > nums[i-1]){
        		a.push_back(nums[i]);
			}
		}
		if(nums[0] < nums[1]) {
			if(a.size() > 0){
				int temp = a[0];
				a.clear();
				a.push_back(nums[0]);
				a.push_back(temp);
				return a;
			}
			a.push_back(nums[0]);
		}
		if(nums[size-1] > nums[size -2]) a.push_back(nums[size-1]);
        return a;
    }

int main(){
	int n ;
	cin >> n;
	vector<int> v;
	for(int i =0 ; i<  n;i++){
		int t;
		cin >>t ;
		v.push_back(t);
	}
	vector<int> a = singleNumber(v);
	for(int i =0  ;i < a.size() ;i++) cout << a[i] <<" " ;
	
	return 0;
	
}
