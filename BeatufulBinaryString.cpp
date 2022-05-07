#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin>> s;
	int count  = 0;
	for(int i = 0 ;i < s.length()-3;i++){
		if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')
		{
			s[i+2] = '1';
			count++ ;
		}
	}
	
	if(s[n-3] == '0' && s[n-2] == '1' && s[n-1] =='0')count++;
	cout << count <<endl;
	return 0;
}
