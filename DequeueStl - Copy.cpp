#include <bits/stdc++.h>
#include<algorithm>

using namespace std;


void printKMax(int arr[], int n, int k){
   
    // My Solution
    
//    for(int i = 0 ; i <= n-k ;i++){
//    	cout << *max_element(arr+i, arr+k+i) << " ";
//    }
//    cout << endl;
    
    
    
    // Copied Solutoin from internet
    int maxnum(-1);
    deque<int> mydeque;
    for(int i=0; i<k; i++){
        mydeque.push_back(arr[i]);
    }
    maxnum = *max_element(mydeque.begin(), mydeque.end());
    cout << maxnum;
    for(int i=k; i<n; i++){
        mydeque.push_back(arr[i]);
        if(mydeque[0]==maxnum){
            mydeque.pop_front();
            maxnum = *max_element(mydeque.begin(), mydeque.end());
            cout << " " << maxnum; 
        }else{
            mydeque.pop_front();
            if(arr[i]>maxnum){
                maxnum=arr[i];
            }  
            cout << " " << maxnum; 
        }
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
