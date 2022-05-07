#include<bits/stdc++.h>
#include<vector>
#include<string>
using ll = long long int;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	
		string s;
		getline (cin , s);
		int i= 0, count = 0 , j = s.length()-1;
		char ch[j + 2];
		strcpy(ch, s.c_str());
		while (i<=j)
		{
			while(ch[j] != 32)
			{
				cout << ch[j--] ;
			}
			cout << " ";
			while(ch[i++] != 32)
			{
				count++;
			}
			while(count >= 0)
			{
				cout << ch[count--];
			}
			cout << " " ;
		}
		return 0;
	
}
