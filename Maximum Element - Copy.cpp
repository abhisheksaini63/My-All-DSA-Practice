#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<string>
using ll = long long int ;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin,s);
		switch(s[0]){
			
			case '1':
				ll  val ;
				string str = s.substr(s[2],s.size());
				val = stoi(str);
				cout << val;
				break;
				
		}
	}
}
