#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, m ;
	cin >> n >> m;
	vector<int> graph[n + 1];

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	vector<int> vis(n + 1, 0);

	for (int i = 1; i < n + 1 ; i++) {
		if (!vis[i]) {
			vis[i] = 1;
			for (int j = 0 ; j < graph[i].size() ; j++) {
				cout << graph[i][j] << " ";
				vis[graph[i][j]] = 1;
			}
		}
	}
	return 0;
}