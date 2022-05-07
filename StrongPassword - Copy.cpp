#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin  >> n;
	string s;
	cin >> s;
	int lower = 0;
	int uper = 0;
	int dig = 0;
	int spaci = 0;
	int ans =0;
	
	for(int i = 0 ;i< s.length() ;i++)
	{
		char ch = s[i];
		
		
		if(ch >= 'a' && ch <= 'z')
		lower++;
		if(ch>='A' && ch<='Z')
		uper++;
		if(ch>=48 && ch<=57)
		dig++;
		if(ch == '!' || ch == '@' ||ch == '#' ||ch == '$' ||ch == '%' ||ch == '^' ||ch == '&' ||ch == '*' ||ch == '(' ||ch == ')' ||ch == '-' ||ch == '+'  )
		spaci++;
	}
	
	if(lower == 0) ans++ ;
	if(uper == 0) ans++;
	if(dig == 0) ans++;
	if(spaci == 0) ans++;
	
	
	if(ans+s.length() >=6)
	{
		cout << ans ;
	}
	
	else if(s.length() < 6){
		int l = s.length()+ans;
		if(l <6)
		{
			ans += 6-l;
		}
	cout << ans << endl;
	}
}
