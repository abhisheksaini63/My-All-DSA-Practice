#include<iostream>
#include<vector>
using namespace std;
int main()
{

	int t;
	cin >> t;
	while(t--)
	{
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> v;
	if(a>b)
	{
		int k = a;
		a =b;
		b = k;
	}
	
	int max = n* b - b;
	int min = n* a - a;
		
	int diff  = abs(a-b);
	while(max > min){
	v.push_back(max);	
	 max  = max -diff;
	}
	
	cout << min << " ";
	for(int i = v.size()-1 ;i>= 0 ;i--)
	cout << v[i] << " " ;
	cout << endl;
	}
	
	return 0;
	
	
}
