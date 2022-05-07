#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	cin>>a[i]; 
	sort((a),(a+5));
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	return 0;
}/*
// C++ program to demonstrate default behaviour of 
// sort() in STL. 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	sort(arr, arr+n); 

	cout << "\nArray after sorting using "
		"default sort is : \n"; 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 

	return 0; 
} 
*/
