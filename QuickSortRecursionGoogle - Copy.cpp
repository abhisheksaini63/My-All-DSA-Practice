#include<iostream>
#include<algorithm>
using namespace std;

int partition(int a[], int l ,int r){
	
	int i = l-1;
	int pivot = a[r];
	
	for(int j = l; j < r ;j++){
		
		if(a[j] <= pivot)
		{
			++i;
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	
	int t = a[i+1];
	a[i + 1] = a[r];
	a[r] = t;
	
	return i+1;
	
}


void quickSort(int a[],int  l ,int r){
	if(l >= r ) 
	return ;
	
	int p = partition(a,l,r);
	
	quickSort(a,l,p-1);
	quickSort(a,p+1,r);
	
}



int main(){
	int n ;
	cin >>n; 
	int a[n] ;
	for(int i = 0 ;i < n; i++) cin >> a[i];

	quickSort(a,0,n-1);
	for(int i = 0 ;i < n ;i++) cout << a[i] << " " ;
		
	return 0;
}























