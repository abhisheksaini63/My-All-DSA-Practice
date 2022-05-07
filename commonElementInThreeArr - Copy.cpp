#include<bits/stdc++.h>
using namespace std;
vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
	        	set<int > ans;
	        	vector<int> anw;
	            unordered_map<int , int >mb;
	            for(int i = 0 ;i < n2 ;i++){
	            	mb.insert(make_pair(b[i],b[i]));
				}
				
				unordered_map<int , int >mc;
	            for(int i = 0 ;i < n3 ;i++){
	            	mc.insert(make_pair(b[i],b[i]));
				}
				
				for(int i = 0 ;i < n1; i++){
					if(mb.find(a[i]) != mb.end() && mc.find(a[i]) != mc.end()){
						ans.insert(a[i]);
					}
				}
				set<int> :: iterator it = ans.begin();
				
				for(it = ans.begin(); it != ans.end() ;it++){
					anw.push_back(*it);
				}
				
				
				return anw;
            //code here.
        }
        
int main(){
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int a[n1], b[n2] , c[n3];
	
	for(int i =0  ; i < n1 ;i++ ) cin >> a[i];
	for(int i =0  ; i < n2 ;i++ ) cin >> b[i];
	for(int i =0  ; i < n3 ;i++ ) cin >> c[i];
	
	vector<int > ans;
	ans  = commonElements(a,b, c, n1 , n2 , n3);
	
	for(int i = 0 ;i< ans.size() ;i++) cout << ans[i] <<" ";
	return 0;
	
}
