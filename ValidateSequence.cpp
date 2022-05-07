#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	int a[n];
	for(int i = 0 ; i< n ;i++) cin >> a[i];
	
	int m ; 
	cin >> m;
	int b[m];
	for(int i = 0 ;i < m ;i++)cin >> b[i];
	
	int index = 0, count = 0;
	
	
//											Solution-1
//	for(int i = 0; i< m ;i++){
//		
//		for(int j = index ; j < n ;j++) {
//			if(b[i] == a[j])
//			{
//				count++;
//				index = j+1;
//				break;
//			}
//		}
//		
//	}
	
//		if(count == m){
//		cout << "yes" <<endl;
//	}
//	else {
//		 cout << "No" << endl;
//	}
	
	
	
//											Solution-2


	int arrIdx = 0 , seqInx = 0;
	
	while(arrIdx < n && seqInx < m){
		if(a[arrIdx] == b[seqInx]) {
			seqInx++;
		}
		else arrIdx++;
	}
	
	if(seqInx == m) cout << "Yes"  << endl;
	else cout <<" NO" ;

	
	return 0;
	
	
}
