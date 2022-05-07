#include<bits/stdc++.h>
using namespace std;

string yesXorNo(int n, long long A[], long long B[]) {
	
		unordered_map<long long int,long long int > m;
		for(int j = 0 ;j < n; j++){
				m.insert(make_pair(A[j], A[j]));
			}
		for(int i =0 ;i < n; i++){
			m.insert(make_pair(B[i], B[i]));
			
		}
		vector< long long int > ans;
		
		for(int i = 0; i< n;i++)
		{
			for(int j =0 ;j < n; j++){
				long long int x = A[i] ^ B[j];
				
				if( m.find(x) != m.end()){
					ans.push_back(x);	
				}
			}
		}
		
		if(ans.size() % 2 == 0){
			return "YES";
		}
		
		else return "NO";
		
		return "YES";
	
        // code here
}
    
    
int main(){
	
	long long int n; cin >> n;
	long long int a[n], b[n];
	
	for(int i = 0 ;i< n; i++)cin >> a[i];
	for(int i = 0 ;i< n; i++)cin >> b[i];
	
	
	string result = yesXorNo(n, a, b);
	
	cout << result << endl;
	
	return 0;
}
