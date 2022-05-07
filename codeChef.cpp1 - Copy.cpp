#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		float a, b;
		cin >> a >> b;
		float sum  = 0;
		sum = (float)a+ b;
		cout << setprecision(1) << fixed << sum << endl;
		 
		sum =  a- b;
		cout << setprecision(1) << fixed << sum << endl;
		sum = a* b;
		cout << setprecision(1) << fixed << sum << endl;
		sum = a/b;
		cout << setprecision(1) << fixed << sum << endl;
		
	}
}
