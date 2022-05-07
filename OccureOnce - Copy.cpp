#include<iostream>
using namespace std;
int main()
{
	int n,k,j;
	cin >>n;
	for(int i= 0 ;i< n;i++){
		cin >> j;
		k ^= j;
	}
	cout << k;
	return 0;
}
