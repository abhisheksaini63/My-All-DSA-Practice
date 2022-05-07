#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif

	string s;
	cin >> s;
	int n;
	int q [n];
	for (int i = 0 ; i < n; i++)cin >> q[i];

	std::vector<int> v(10);
	for (auto ch : s)
	{
		v[ch - '0']++;
	}

	for (int i = 0; i < n; i++)
	{
		cout << v[q[i]] << " " ;
	}


	return 0;
}
