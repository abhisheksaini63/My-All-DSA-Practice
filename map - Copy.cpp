#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int h, mint ;
	cin >> h >> mint ;
	int dif = 60 - mint;
		
	map <int , string > m;
	m.insert(make_pair(1, "one"));
	m.insert(make_pair(2, "two"));
	m.insert(make_pair(3, "three"));
	m.insert(make_pair(4, "four"));
	m.insert(make_pair(5, "five"));
	m.insert(make_pair(6, "six"));
	m.insert(make_pair(7, "seven"));
	m.insert(make_pair(8, "eight"));
	m.insert(make_pair(9, "nine"));
	m.insert(make_pair(10, "ten"));
	m.insert(make_pair(11, "eleven"));
	m.insert(make_pair(12, "twelve"));
	
	map<int , string > :: iterator it;
	
	for(int i =1 ; i< 13 ; i++ )
	{
		if(*it == h)
		
	}
	
}
