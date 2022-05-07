#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int> &A, int B) {
    vector <int> a;
    int n = A.size();
    int sum = 0;

    int i = 0 , j = 0 , t = 0;
    
    while(t <= B){
    	sum  = 0;
    	i = 0 ;
    	j = 0;
    	for(i = 0 ; i < B-t; i++){
    		sum += A[i];
		}
		
		for(j = 1; j <= B-i ;j++){
			sum += A[n-j];
		}
		
		
		a.push_back(sum);
		t++;
	}
    
    sort(a.begin(),a.end());
    
    
//    cout << a[0] << endl;
    cout << a[a.size()-1] <<endl;
    return 1;
    
}


using namespace std;
int main(){
	int n ;
	cin >> n;
	vector<int> a;
	
	for(int i = 0 ;i < n; i++){
		int t; 
		cin >> t;
		a.push_back(t);
	}
	int b;
	cin >> b;
	
	int ans = solve(a,b);
	
	
	return 0;
}
