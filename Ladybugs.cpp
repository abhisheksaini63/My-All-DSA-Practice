#include<iostream>
#include<string> 
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;

	sort(s, s+s.length());
	cout << s;
}