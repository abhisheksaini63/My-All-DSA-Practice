
#include <string>
#include <iostream>
using namespace std;
//char invert_char(char x)
//{
//    if (x >= 'a' && x <= 'z')
//        return char('a' -x + 'z');
//    if (x >= 'A' && x <= 'Z')
//        return char('A' -x + 'Z' + 32);
//
//    return x;
//}
//
//std::string invert_string(std::string str)
//{
//    for (auto& c: str)
//        c = invert_char(c);
//    return str;
//}

int main()
{
   string s ;
   getline(cin, s);
   
   for(int i = 0 ;i < s.length() ;i++ )
	{
		char x = s[i];
		
		if (x >= 'a' && x <= 'z')
       		{
       			s[i] = 'a' - x + 'z';
			}
    	if (x >= 'A' && x <= 'Z')
        	{
        		s[i] = 'A' - x + 'Z' + 32;
			}	 
	}
	cout << s;
    return 0;
}

