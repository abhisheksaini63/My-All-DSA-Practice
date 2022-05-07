#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n ;
		cin >> n;

		vector<int> v(n), od, ev;
		int odd = 0 , even = 0;

		for (int i = 0 ; i < n; i++) {
			cin >> v[i];
			if (v[i] & 1) {
				odd++;
				od.push_back(v[i]);
			}
			else {
				even++;
				ev.push_back(v[i]);
			}
		}

//		for (int a : od)cout << a << " " ; cout << endl;
//
//		for (int a : ev)cout << a << " " ; cout << endl;
		
		if(odd > even+1 || even > odd+1) {
			v.clear();
			v.push_back(-1);
		}
		else {
			if(even>= odd){
				int j = 0, k = 0;
				for(int i = 0 ; i< n ;i++){
					if(i&1){
						v[i] = od[j++];
					}
					else v[i] = ev[k++];
				}
			}
			else{
				int j = 0, k = 0;
				for(int i = 0 ; i< n ;i++){
					if(i&1){
						v[i] = ev[k++];
					}
					else v[i] = od[j++];
				}
			}
		}
		for(int a : v){
			cout << a <<  " " ;
		}
		cout << endl;

	}
return 0;
}
