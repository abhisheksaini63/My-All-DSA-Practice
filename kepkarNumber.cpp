#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int c= 0,lm, up ;
	cin >> lm >> up;
	int a[] = {1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4950, 5050, 7272, 7777, 9999, 17344, 22222, 77778, 82656, 95121, 99999};
	for(int i = 0 ; i<= 21 ; i++){
		if(a[i] > up) break;
		if(a[i] >= lm && a[i] <= up ){
			c++;
			cout << a[i] << " " ;
		}
	}
	if(c == 0)
		cout << "INVALID RANGE" << endl;

	return 0;
}