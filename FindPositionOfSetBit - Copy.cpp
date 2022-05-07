#include<bits/stdc++.h>
using namespace std;
int findPosition(int n) {
        if(n == 0 ||( n & n-1) ) return -1;
        
        int i = 1;
        int count = 1;
        while((i^ n) != 0){
            count++;
             i = i<<1;
        }
        
        return count;
        // code here
    }
int main(){
	
	int n;
	cin >>n;
	
	int a = findPosition(n);
	cout << a;
	return 0;
	
	
}
