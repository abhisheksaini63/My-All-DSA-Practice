#include<iostream>

using namespace std;

void swap(int *a, int  *b){
	int t =  *a;
	*a = *b;
	*b = t;
}

int* bubSort(int a[], int n){
	bool isSorted = false;
	while(!isSorted){
		isSorted = true;
		for(int i = 0 ;i < n-1;i++)
		{
			if(a[i] > a[i+1]){
				swap(a[i], a[i+1]);
				isSorted = false;
			}
		}
	}
	
	return a;
}

int main(){
	int n,*p;
	cin>> n;
	int a[n];
	for(int i= 0 ;i<n ;i++)cin>> a[i];
	
	p = bubSort(a, n);
	
	for(int i = 0 ;i< n;i++) cout << a[i] << " " ;
	cout << endl;
	
	
	return 0;
	
}
