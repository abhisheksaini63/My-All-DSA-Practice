#include<iostream>
//#include<algorithm>
using namespace std;

void swap (int *a, int *b)
{
	int t = *a ;
	*a = *b;
	*b = t;
}

int* insertion (int a[],int n){
	int j = 0;
	for(int i =1 ;i < n;i++ ){											
		 j = i; 
		while(j > 0 && a[j] < a[j-1]){
			swap(a[j], a[j-1]);
			j--;
		}
	}
	
	return  a;
}



int main()
{
	int n,*p;
	cin >> n;
	int a[n];
	for(int i = 0 ; i< n; i++) cin >> a[i];
	
	
	p = insertion(a,n);
	for(int i = 0 ; i< n; i++) cout <<  p[i] << " " ;
	cout << endl;
	
	return 0;

}
