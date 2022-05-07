#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n , k;
	cin >> n >> k;
	
	int a[n][2];
	vector<int> v;
	long long int sum  = 0;
	
	for(int i = 0 ; i< n ;i++)
	for(int j = 0 ;j < 2; j++) 
	{
		cin >> a[i][j];
		if(j == 1 && a[i][j] == 1){
			v.push_back(a[i][j-1]);
		}
		if(j == 0){
			sum += a[i][j];
		}
	}
	
	if(v.size() > k ){
		
		sort(v.begin(), v.end());
		for(int i = 0 ; i < v.size()- k;i++){
			sum -= 2*v[i];			
		}
		
		cout << sum << endl;	
	}
	
	else {
		cout << sum <<endl;
	}
}
