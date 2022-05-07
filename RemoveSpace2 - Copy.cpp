#include <iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
string removeSpaces(string str)  
{ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
}

//void removeSpaces(string *str)
//{
//
//	int count = 0;
//
//	
//	for (int i = 0; str[i]; i++)
//		if (str[i] != ' ')
//			str[count++] = str[i]; 
//							
//	str[count] = '\0';
//}


int main()
{
	string s;
	
	int raw = 0 , coul = 0;
	getline(cin , s);
	s =removeSpaces(s);
	int len = s.length();
	int rootInt = sqrt(len);
	float root = sqrt(len);
	if(root > rootInt)
	{
		raw = rootInt;
		coul = raw + 1;
	}
	else
	{
		raw = coul = rootInt;
	}
	
//	
	for(int j = 0 ;j< coul; j++){
	for(int i = j ; i< s.length(); i += coul)
	{
		cout << s[i] ;
	}
	cout << " "; 
	}
	
	
	//cout << raw << endl << coul << endl;
	//cout << s;
	return 0;
}


//#include<iostream>
//#include<string>
//#include<algorithmI I>
//using namespace std;
//int main()
//{
//	string  s ;
//	getline(cin , s);
//	
//	remove(s.begin(), s.end(), ' ');
//	cout << s;
//	return 0;
//}
