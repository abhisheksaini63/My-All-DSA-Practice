#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0,k = 0;
        for(int i =0 ; i<nums.size();i++)
        {
        	if(nums[i] == 1){
        		m++;
        	
        		
			}
        	if(nums[i] == 0)
        	{
        		if(k< m)
        		k = m ;
        		m = 0;
        	
			}
			
            
        }
       if(k< m) k = m;
        return k;
        
    }
    
int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i< n;i++)
	{
		int t;
		cin >>t ;
		v.push_back(t);
	}
	
	cout << findMaxConsecutiveOnes(v) <<endl;
	return 0;
}
