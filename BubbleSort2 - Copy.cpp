#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
	for(int k = 1 ;k <n -1; k++){
		for(int i = 0 ;i<= n-2 ;i++){
			if(a[i]>a[i+1]){
				int t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	int a[n] ;
	for(int i = 0; i< n;i++) cin >> a[i];
	
	bubbleSort(a,n);
	for(int i = 0; i< n;i++) cout <<  a[i];
	int sum = a[n-1]+a[n-2];
	cout << sum << endl;
	return 0;
}
