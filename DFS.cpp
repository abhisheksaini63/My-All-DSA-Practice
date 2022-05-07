#include <bits/stdc++.h>
using namespace std;
void dfs(int i, vector<int> &vis, vector<int> *AdjList, vector<int> &ans) {
	ans.push_back(i);
	vis[i] = 1;

	for (int j = 0 ; j < AdjList[i].size() ; j++) {
		if (!vis[AdjList[i][j]])
			dfs(AdjList[i][j], vis, AdjList, ans);
	}

}

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	vector<int> AdjList[n + 1];

	for (int i = 0 ; i < m; i++) {
		int u, v;
		cin >> u >> v;
		AdjList[u].push_back(v);
		AdjList[v].push_back(u);

	}

	vector<int> ans;
	vector<int> vis(n + 1, 0);
	for (int i = 0 ; i <= n; i++) {
		if (!vis[i]) {
			dfs(i, vis, AdjList, ans);
		}
	}

	for (int val = 1; val < ans.size() ; val++)cout << val << " ";
	cout << endl;
	return 0;
}