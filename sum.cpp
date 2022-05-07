#include<iostream>
using namespace std;
// 

int modRecursive (int a, int b, int c){
	if(b== 0){
		return 1;
	}
	if(b%2 == 0){
		return (modRecursive((a*a)%c, b/2, c));
	}
	else{
		return (a*(modRecursive((a*a)%c, b/2, c)))%c;
	}
}
int main(int argc, char const *argv[])
{
	int a, b ,c;
	cin >> a  >> b >> c;
	cout << modRecursive(a, b, c) << endl;
	return 0;
}