#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		int n , c, m ;
		cin >> n >> c >> m;
		int totalbaars , totaleat;
		 totalbaars = totaleat = n/c ;
		
		while (totalbaars >= m)
		{
			int k =  totalbaars/m;
			totaleat += k;
			totalbaars =k + totalbaars%m ;
		}
		cout << totaleat << endl;
	}
}
//3       t = 3 (test cases)
//10 2 5  n = 10, c = 2, m = 5 (first test case)
//12 4 4  n = 12, c = 4, m = 4 (second test case)
//6 2 2   n = 6,  c = 2, m = 2 (third test case)
