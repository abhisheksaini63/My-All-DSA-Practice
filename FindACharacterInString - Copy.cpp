#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char c[] ={'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n','k'};
		string s;
		cin >> s;
		int position = 0 ;
		bool con = true;
		
		for(int i =0 ; i< 10; i++)
		{
			long long int f = s.find(c[i],position);
			if(f>s.length())
			{
				cout <<"NO" << endl;
				con  = false;
				break;
			}
			position = f+1;
		}
		if(con) 
		{
			cout << "YES" << endl;
		}
	}
}



//// string::find
//#include <iostream>       // std::cout
//#include <string>         // std::string
//
//int main ()
//{
//  std::string str ("There are two needles in this haystack with needles.");
//  std::string str2 ("needle");
//
//  // different member versions of find in the same order as above:
//  std::size_t found = str.find(str2);
//  if (found!=std::string::npos)
//    std::cout << "first 'needle' found at: " << found << '\n';
//
//  found=str.find("needles are small",found+1,6);
//  if (found!=std::string::npos)
//    std::cout << "second 'needle' found at: " << found << '\n';
//
//  found=str.find("haystack");
//  if (found!=std::string::npos)
//    std::cout << "'haystack' also found at: " << found << '\n';
//
//  found=str.find('.');
//  if (found!=std::string::npos)
//    std::cout << "Period found at: " << found << '\n';
//
//  // let's replace the first needle:
//  str.replace(str.find(str2),str2.length(),"preposition");
//  std::cout << str << '\n';
//
//  return 0;
//}
#include<iostream>
#include<algorithm>
#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	cout<< s.find('h');
//	return 0;
//	
//}
