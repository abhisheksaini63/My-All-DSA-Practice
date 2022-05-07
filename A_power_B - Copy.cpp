#include<iostream>
using namespace std ;

int ans(int n,int b){
	if(b == 0) return 1;
	return n * ans(n, b-1);
}

int main()
{
	int n; cin>> n;
	int b;
	cin >> b ;
	
	cout << ans(n,b);
	return 0;
}
