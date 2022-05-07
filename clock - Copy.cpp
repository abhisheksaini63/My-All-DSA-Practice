#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	int h, m, s, a, err;
	a = err = 0;
	while(err == 0)
	{
		cout<< "Enter the hours = ";
		cin >> h;
		cout << "\nEnter the min = ";
		cin >> m;
		cout << "\nEnter the seconds = ";
		cin >> s;
		if(h < 24 && m < 59 && s < 59)
		err++;
		else 
		{
			cout << "You entered worng time formate " << endl;
			getch();
			system("cls");
		}
	}
	
	while(a == 0)
    {
    	system ("cls");
    	cout << h << ":" << m << ":" << s;
    
    	Sleep(1000);
    	s++;
		if(s > 59)
    	{
    		s = 0; m++;
		}
		
		if( m > 59)
		{
			m = 0 ; h++;
		}
		
		if(h > 24)
		{
			h = 0;
		}
	}
	return 0 ;
}
