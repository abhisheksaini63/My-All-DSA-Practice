#include<iostream>
using namespace std;
bool isPalindrome(string str)
{
	int l=0;
	int r=str.length();
	if(l==r)return fals;
	
	return isPalindrome(str);
}
}
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	if(isPalindrome(str,0,n-1))
	cout<<"yes";
	else
	cout<<"No";
}
