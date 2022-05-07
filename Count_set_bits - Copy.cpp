#include<iostream>
using namespace std;
int count_set_bits(int n)
{
	int count = 0;
	
	// 1st approach
//	while(n>0){
//		if(n & 1 == 1) count++;
//		n >>= 1;
//	}


	// 2nd approach
//	while(n>0){
//		count++ ;
//		n = n&(n-1);
//	}

	// 3rd approach
//	count = __builtin_popcount(n);
	
	return count;
}
int main()
{
	int n;
	cin >> n;	
	cout << count_set_bits(n);
	return 0;
}
