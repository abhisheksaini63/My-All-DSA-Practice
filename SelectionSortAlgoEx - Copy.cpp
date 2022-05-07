#include<iostream>
using namespace std;
void swap (int *a , int *b){
	int t = *a; 
	*a = *b;
	*b = t;
}

int* selection(int a[], int n){
	int startIndx = 0;
	int smallestIndx = 0;
	
	while(startIndx < n-1){
		smallestIndx = startIndx ;
		for(int i = startIndx + 1 ; i < n;i++ ){
			if(a[smallestIndx] > a[i]){
				smallestIndx = i;
			}
		}
		swap(a[smallestIndx], a[startIndx]);
		startIndx++;
	}
	
	return a;
}

int main()
{
	int n ;
	cin >> n;
	int a[n];
	for(int i = 0 ;i < n;i++)cin >> a[i];
	
	int *p = selection(a,n);
	
	for(int i =0 ;i< n;i++)cout << p[i] << " ";
	cout << endl;
	return 0;
}
