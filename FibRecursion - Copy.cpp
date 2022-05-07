#include<iostream>
using namespace std;
using in= unsigned long long int;
in fib(in n){
	if(n == 1 || n ==2) return 1;
	
	return fib(n-1)+fib(n-2);
}


in fib2(in n){
	if(n <= 1) return n;
	
	in f1, f2,f;
	f1 = 0; f2 = 1;
	
	for(in i = 2 ;i<= n;i++) {
		f = f1+ f2;
		f1  = f2;
		f2 = f;
	}
	
	return f;
}

int main()
{
	in n;
	cin >> n;
	
	cout << fib2(n) ;
	return 0;
}

