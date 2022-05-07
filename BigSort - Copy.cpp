#include<iostream>
#include<algorithm>
#include<string>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
//bool compare (string s, string sa)
//{
//	return s.compare(sa);
//}
int main()
{
	int n;
	cin >> n;
	cpp_int a[n];
	for(int i = 0; i< n; i++) cin >> a[i];
	
	
	for(int i = 0 ;i< n ;i++) cout << a[i] <<  endl;
	return 0;
}
