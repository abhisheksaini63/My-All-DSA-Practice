#include<bits/stdc++.h>
using namespace std;
int homework(int n, vector<vector<int>> points, int m) {
	vector<int> s;

	for (int i = 0 ; i < n - 1; i++) {
		int x1 = points[i][0];
		int y1 = points[i][1];
		for (int j = i + 1; j < n ; j++) {
			int x2 = points[j][0];
			int y2 = points[j][1];

			int xd = abs (x1 - x2);
			int yd = abs (y1 - y2);

			s.push_back(min(xd, yd));
		}
	}
	sort(s.begin(), s.end());
	return s[m - 1];
}


int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n;
	vector<vector<int>> points
	                 return 0;
}