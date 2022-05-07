#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif


	int n;
	cin >> n;
	std::vector<int> v;

	while (n > 0) {
		if (n & 1) {
			v.push_back(1);
			n>>= 1;
		}
		else {
			v.push_back(0);
			n>>=1;
		};
	}

	reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)cout << v[i] << " ";

	return 0;
}
