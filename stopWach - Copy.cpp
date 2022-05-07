#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	int h, m, s , mls = 99, a, err;
	a = err = h = m = s = 0;
		cout<< "Enter the hours = ";
		cin >> h;
		cout << "\nEnter the min = ";
		cin >> m;
		cout << "\nEnter the seconds = ";
		cin >> s;
		
	system("cls");
	while(!(h == 0 && m ==0 && s == 0 ))
    {
    	system ("cls");
    	cout << h << ":" << m << ":" << s << ":" << mls--;
    
    	Sleep(1);
    	if(mls == 0)
    	{
    		mls = 99;
    		s--;
		}
		if(s == 0)
    	{
    		s = 59; m--;
		}
		
		if( m == 0)
		{
			m = 59 ; h--;
		}
		
	}
	return 0 ;
}
