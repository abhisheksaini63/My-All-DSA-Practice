#include<iostream>
using namespace std;

int main()
{
	int p, d, m , s;   //100 19 1 180
	cin >> p >> d >> m >>s;
	int count = 1;
	int pri = p;
	
	while(p-d >m)
	{
		p -=d;
		pri += p;
		if(pri<=s)count++; 			
	}
	if(p-d <= m )
	{
		if(p>=m)
		{
			while(pri<=s) 
			{
				pri+=m;
				count++;
			}
		}
	}
	
	cout << count-1 <<endl;
	
	
	
	
	
	
	
	
	
	
	
	
//	s -= p;
//	while(s >= 0)
//	{
//		if(p-d >=m)
//		p -= d;
//		else if(p-d <= m) break;
//		s -= p;
//		count++ ;
//	}
//	while(s>= 0 )
//	{
//		s -= m;
//		if(s>=0)
//		count++;
//	}	
//	
//	cout << count << endl;
}

//100 19 1 180
