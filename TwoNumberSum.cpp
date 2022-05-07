#include<iostream>
#include<algorithm>
#include <unordered_map>
using namespace std;




//int* twoNumberSum(int a[], int n , int target){
////	int b[2]= {0};
//	
//	for(int i = 0 ; i< n -1 ; i++ )
//	{																	//	1 2 3 4 5
//		for(int j = i + 1; j< n; j++)
//		{
//			
//			int sum = a[i] + a[j];
//			if(sum == target )
//			{
//				a[0] = a[i];
//				a[1] = a[j];
//				return a;
//			}
//		}
//	}
//	
//	return a;
//	
//}





//int* twoNumberSum (int a[], int n , int target){
//	int sum = 0;
//	int l = 0;
//	int r = n-1;
//	sort(a,a+n);
//	
//	while(l<r){
//		sum = a[l] + a[r];
//		if(sum == target){
//			a[0]= a[l];
//			a[1]  = a[r];
//			return a;
//		}
//		
//		else if(sum < target){
//			l++;
//		}
//		else r--;
//	}
//	return a;
//}






int* twoNumberSum (int a[], int n , int target){
	unordered_map<int, bool> b;
	
	for(int i = 0 ; i< n;i++){
		if(b.find(target-a[i]) == b.end()){
			b.insert(make_pair(a[i],true));
		}
		else{
			
			a[0] = target - a[i] ;
			a[1] = a[i];
			return a;
			
		}
	}
	return a;
}






int main(){
	int n ;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++)cin >> a[i];
	
	int target ;
	cin >> target;
	
	
	int *p = twoNumberSum (a, n ,target);
	
	for(int i = 0; i< 2; i++)cout << p[i] << " ";
	
	cout << endl;
	
	return 0;
	
}
