// declaration and accessing elements of array

#include<iostream>
using namespace std;

int main()
{
	// int a[5] = {1, 2, 3, 4, 5};     // declaration and initialization of array
	
	int a[10] ;
	
	cout  << " Enter ten numbers = " << endl;
	
	for(int i  = 0; i < 10 ;i++)       // values from user
	cin >> a[i];  
	
	cout<< "Entered values are  -> " << endl;
	
	for(int i = 0 ;i< 10 ;i++ )      // print all values 
	cout << a[i] << " ";
	return 0;
}
