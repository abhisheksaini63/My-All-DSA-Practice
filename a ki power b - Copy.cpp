

#include<bits/stdc++.h>
using namespace std;
int powerA  (int a , int b)
{
	if(b == 0)return 1;
	if(b%2 == 0) return powerA(a*a, b/2);
	 if(b%2 == 1) return (a*powerA((a*a), b/2));
	 return 0;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << powerA(a, b) << endl;
	return 0;
}
