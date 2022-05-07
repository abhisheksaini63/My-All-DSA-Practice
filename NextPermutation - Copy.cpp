#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> nums){
	int s = nums.size();
	if(s == 1){
		cout << "["<< nums[0]<<"]"<< endl;
	}
	
	else {
		int i = s - 2;
		for(i = s-2 ;i >= 0;i--){
			if(nums[i+1] > nums[i]){
				swap(nums[i+1], nums[i]);
				cout << "[";
				for(int i =0 ;i < s-1; i++){
					cout << nums[i] <<"," ;
					
				}
				cout << nums[s-1];
				cout << "]";
				
				return ;
			}
		}
		
		sort(nums.begin() , nums.end());
//		cout << nums <<endl;
		cout << "[";
				for(int i =0 ;i < s-1; i++){
					cout << nums[i] <<"," ;
					
				}
				cout << nums[s-1];
				cout << "]";
		return ;	
	}
}
int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i =0 ;i< n; i++){
		int t;
		cin >>t;
		v.push_back(t);
	}
	
	nextPermutation(v);
	return 0;
}




















