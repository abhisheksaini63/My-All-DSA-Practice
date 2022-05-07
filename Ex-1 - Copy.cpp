#include<iostream>
using namespace std;
int main()
{
	char a='a';
	char *x=&a;
	int b=2;
	int *y=&b;
	double c=3.56;
	double *z=&c;
	cout<<"\nThe adress of char a is ="<<x;
	cout<<"\nThe adress of int b is ="<<y;
	cout<<"\nThe adress of double c is ="<<z;
	cout<<"\nThe adress of char* x is ="<<&x;
	cout<<"\nThe adress of int* y is ="<<&y;
	cout<<"\nThe adress of double* z is ="<<&z;
	
	cout<<"\n\nThe value of char a is ="<<a;
	cout<<"\nThe value of int b is ="<<b;
	cout<<"\nThe vlaue of double c is ="<<c;
	cout<<"\nThe value of char* x is ="<<x;
	cout<<"\nThe value of int* y is ="<<y;
	cout<<"\nThe value of double* z is ="<<z;
	
	cout<<"\n\nThe size of char a is ="<<sizeof(a);
	cout<<"\nThe size of int b is ="<<sizeof(b);
	cout<<"\nThe size of double c is ="<<sizeof(c);
	cout<<"\nThe size of char* x is ="<<sizeof(x);
	cout<<"\nThe size of int* y is ="<<sizeof(y);
	cout<<"\nThe size of double* z is ="<<sizeof(z);
	return 0;
}
