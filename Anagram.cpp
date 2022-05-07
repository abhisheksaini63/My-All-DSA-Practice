#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		
		vector<int>fe(26);
		vector<int>f(26);
		int change = 0;
		int len = s.length();
		if(len %2 == 1) cout << "-1" << endl;
		else{
			
			string s1 = s.substr(0,len/2);
			sort(s1.begin(),s1.end());
			
			string s2 = s.substr(len/2,len);
			sort(s2.begin(),s2.end());
			
			
			for(int i = 0 ;i< len/2; i++)
			{
				int pos  =s2.find(s1[i]);
				if(pos >=0 && pos<len/2){
					s2.erase(s2.begin()+pos);
				}
				else
				{
					change++;
				}
			}
			cout << change << endl;
		}
	}
}
