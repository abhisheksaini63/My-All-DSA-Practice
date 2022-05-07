#include <iostream>
#include<string>
#include<vector>
using namespace std;

   
int main()  
{  
     
	vector<int> a;
	for(int i =0  ;i < 5; i++) {
		int t;
		cin >>t;
		a.push_back(t);
	}
	
	 cout <<a.size() <<endl;
    return 0;  
} 
