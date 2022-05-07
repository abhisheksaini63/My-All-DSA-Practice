#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
//	int t;
//	cin >> t;
//	while(t--)
//	{

	int n; 
	cin >> n;
	vector<int> a;
	vector<int> b;
	for(int i = 0 ;i< n ;i++)
	{
		int d;
		cin >> d;
		a.push_back(d);
	}
	vector<int> ::iterator it;
	int m; 
	cin >> m;
	for(int i = 0 ;i < m ;i++)
	{
		int d;
		cin >> d;
		it = find(a.begin(),a.end(), d);
		if(it != a.end()){
			a.erase(it);
		}
		else
		{
			b.push_back(d);
		}
		
	}

	
	sort(b.begin(),b.end());
	
	for(int i =0 ;i< b.size();i++)
	cout << b[i]<< " ";	

//	}
	return 0;
}
