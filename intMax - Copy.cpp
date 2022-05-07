#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[INT_MAX][n];
	for(int i = 0 ;i< INT_MAX; i++)
	 for(int j = 0 ; j< n; j++)
	 {
	 	cin>> a[i][j];
	 }
	 
	for(int i = 0 ;i< INT_MAX; i++)
	 {
	 	for(int j = 0 ; j< n; j++)
	 {
	  	cout <<  a[i][j] << " ";
	 }
	 cout << endl; 
	 }
}
