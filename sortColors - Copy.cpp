#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
        int z = 0;
        int one = 0;
        int two = 0;
        
        for(int i = 0 ;i  < nums.size(); i++){
            if(nums[i] == 0) z++;
            if(nums[i] == 1) one++;
            if( nums [i] == 2) two++;
        }
        int i , j , k;
        for( i = 0; i< z ;i++ ) nums[i] = 0;
        
        for(j = i ; j < i + one - 1; j++ ) nums[j] = 1;
        for(int k = j ; k < j + two - 1; k++) nums[k] = 2;
        
        
        
}   
    
int main(){
	int n;
	cin >> n;
	
	vector<int> a;
	for(int i = 0 ;i < n; i++){
		int t ;
		cin >> t;
		a.push_back(t);
	}
	
	sortColors(a);
 	
	for(int i = 0 ;i< a.size() ;i++) cout << a[i] << " " ;
	return 0;
	
	
}
