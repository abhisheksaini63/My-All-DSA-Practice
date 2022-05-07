// #include<bits/stdc++.h>
// using namespace std;



// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌


// //------------------✍ BFS ✍------------------//



// // int main(int argc, char const *argv[])
// // {
// // 	int n, m ;
// // 	cin >> n >> m;
// // 	vector<int> graph[n + 1]
;
// // 	for (int i = 0; i < m; i++) {
// // 		int u, v;
// // 		cin >> u >> v;
// // 		graph[u].push_back(v);
// // 		graph[v].push_back(u);
// // 	}
// // 	for (int i = 1 ; i < n + 1; i++) {
// // 		cout << i << "->";
// // 		for (int j = 0; j < graph[i].size() ; j++) {
// // 			cout  <<  graph[i][j] << " ";
// // 		} cout << endl;
// // 	}
// // 	vector<int> vis(n + 1, 0);
// // 	cout << "<<<<<<-----  BSF  ----->>>>>" << endl;

// // 	for (int i = 1 ; i <= n; i++) {
// // 		if (!vis[i]) {
// // 			queue<int> node;
// // 			node.push(i);
// // 			vis[i] = 1;
// // 			while (!node.empty()) {
// // 				int val = node.front();
// // 				node.pop();
// // 				cout << val << " ";
// // 				for (int j = 0 ; j < graph[val].size(); j++) {
// // 					if (!vis[graph[val][j]])
// // 					{
// // 						node.push(graph[val][j]);
// // 						vis[graph[val][j]] = 1;
// // 					}
// // 				}
// // 			}
// // 		}
// // 	}
// // }



// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌


// //------------------✍ DFS ✍------------------//


// // void dfs(int i, vector<int> &vis, vector<int> *AdjList, vector<int> &ans) {
// // 	ans.push_back(i);
// // 	vis[i] = 1;

// // 	for (int j = 0 ; j < AdjList[i].size() ; j++) {
// // 		if (!vis[AdjList[i][j]])
// // 			dfs(AdjList[i][j], vis, AdjList, ans);
// // 	}

// // }

// // int main(int argc, char const *argv[])
// // {
// // 	int n, m;
// // 	cin >> n >> m;
// // 	vector<int> AdjList[n + 1];

// // 	for (int i = 0 ; i < m; i++) {
// // 		int u, v;
// // 		cin >> u >> v;
// // 		AdjList[u].push_back(v);
// // 		AdjList[v].push_back(u);

// // 	}

// // 	vector<int> ans;
// // 	vector<int> vis(n + 1, 0);
// // 	for (int i = 0 ; i <= n; i++) {
// // 		if (!vis[i]) {
// // 			dfs(i, vis, AdjList, ans);
// // 		}
// // 	}

// // 	for (int val = 1; val < ans.size() ; val++)cout << val << " ";
// // 	cout << endl;
// // 	return 0;
// // }


// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌


// //------------------✍ CYCLE DETECTION BY BFS ✍------------------//

// // bool cycle(int i , vector<vector<int>> &graph, vector<int> &visited) {
// // 	queue <pair<int, int>> nodesQ;
// // 	nodesQ.push({i, -1});
// // 	visited[i] = 1;
// // 	while (!nodesQ.empty()) {
// // 		int val = nodesQ.front().first;
// // 		int parent = nodesQ.front().second;
// // 		nodesQ.pop();
// // 		for (int it : graph[val]) {
// // 			if (!visited[it]) {
// // 				visited[it] = 1;
// // 				nodesQ.push({it, val});
// // 			}
// // 			else if (parent != it) {
// // 				return true;
// // 			}

// // 		}
// // 	}
// // 	return false;
// // }


// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌


// // int main(int argc, char const *argv[])
// // {
// // 	int n, m;
// // 	cin >> n >> m;
// // 	vector<vector<int>>graph(n + 1);
// // 	for (int i = 0 ; i < m ; i++) {
// // 		int u, v;
// // 		cin >> u >> v;
// // 		graph[u].push_back(v);
// // 		graph[v].push_back(u);
// // 	}



// // 	for (int i = 0 ; i < graph.size(); i++) {
// // 		cout << i << " ----> ";
// // 		for (auto it : graph[i]) {
// // 			cout << it << " " ;
// // 		} cout << endl;
// // }



// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌



// // 	vector<int> visited(n + 1, 0);
// // 	bool flag = false;

// // 	for (int i = 1; i <= n; ++i)
// // 	{
// // 		if (!visited[i]) {
// // 			if (cycle(i, graph, visited)) {
// // 				cout << "yes" << endl; flag = true; break;

// // 			}
// // 		}
// // 	}
// // 	if (!flag) {
// // 		cout << "NO" << endl;
// // 	}
// // 	return 0;
// // }


// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌


// //------------------✍ CYCLE DETECTION BY DFS ✍------------------//


// // bool checForCycle(int  i , int parent, vector<int> &visited, vector<vector<int>> &graph) {
// // 	visited[i] = 1;
// // 	for (auto it : graph[i]) {
// // 		if (!visited[it]) {
// // 			if (checForCycle(it, i , visited, graph)) return true;
// // 		}
// // 		else if (it != parent) return true;
// // 	}
// // 	return false;
// // }


// // int main(int argc, char const *argv[])
// // {
// // 	int n , m;
// // 	cin >> n >> m;
// // 	vector<vector<int>> graph(n + 1);
// // 	for (int i = 0 ; i < m ; i++) {
// // 		int u , v; cin >> u >> v;
// // 		graph[u].push_back(v);
// // 		graph[v].push_back(u);
// // 	}

// // 	for (int it = 1 ; it < graph.size(); it++) {
// // 		for (auto ita : graph[it] ) {
// // 			cout << ita << " ";
// // 		} cout << endl;
// // 	}
// // 	bool flag  = false;
// // 	vector<int > visited(n + 1, 0);
// // 	for (int i = 1 ; i <= n ; i++) {
// // 		if (!visited[i]) {
// // 			if (checForCycle(i, -1, visited, graph)) {
// // 				cout << "YES" << endl; flag = true; break;
// // 			}
// // 		}
// // 	}

// // 	if (!flag) cout << "NO" << endl;
// // 	return 0;
// // }



// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌



// //------------------✍ BIPARTITE GRAPH USING BFS ✍------------------//


// // bool bipartiteBFS(int src, vector<vector<int>> &graph, vector<int> &color) {
// // 	queue<int> nodesQ;
// // 	nodesQ.push(src);
// // 	color[src] = 1;
// // 	while (!nodesQ.empty()) {
// // 		int val = nodesQ.front();
// // 		nodesQ.pop();

// // 		for (auto it : graph[val]) {
// // 			if (color[it] == -1) {
// // 				color[it] == 1 - color[val];
// // 				nodesQ.push(it);
// // 			}
// // 			else if (color[it] == color[val]) {
// // 				return false;
// // 			}
// // 		}
// // 	}
// // 	return true;
// // }

// // bool checkBipartite(vector<vector<int>>&graph, int n) {
// // 	vector<int>color(n + 1, -1);
// // 	for (int i = 0 ; i < n ; i++) {
// // 		if (color[i] == -1) {
// // 			if (!bipartiteBFS(i, graph, color)) {
// // 				return false;
// // 			}
// // 		}
// // 	}
// // 	return true;
// // }


// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌


// //------------------✍ BIPARTITE GRAPH USING DFS ✍------------------//

// // bool bipartiteDFS(int src, vector<vector<int>> &graph, vector<int> &color) {
// // 	if (color[src] == -1) color[src] = 1;
// // 	for (auto it : graph[src]) {
// // 		if (color[it] == -1) {
// // 			color[it] = 1 - color[src];
// // 			if (!bipartiteDFS(it, graph, color)) {
// // 				return false;
// // 			} else if (color[it] == color[src]) return false;
// // 		}
// // 	}
// // 	return true;
// // }

// // bool checkBipartite(vector<vector<int>>&graph, int n) {
// // 	vector<int>color(n + 1, -1);
// // 	for (int i = 0 ; i < n ; i++) {
// // 		if (color[i] == -1) {
// // 			if (!bipartiteDFS(i, graph, color)) {
// // 				return false;
// // 			}
// // 		}
// // 	}
// // 	return true;
// // }




// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌


// //------------------✍ CYCLE DETECTION IN DIRECTED GRAPH ✍------------------//

// bool detectCycle(int i , vector<vector<int>> &graph, vector<int> &visited, vector<int> &dfsVisited) {
// 	visited[i] = 1;
// 	dfsVisited[i] = 1;

// 	for (auto it : graph[i]) {
// 		if (!visited[it]) {
// 			if (detectCycle(it, graph, visited, dfsVisited)) return true;
// 		}
// 		else if (dfsVisited[it]) {
// 			return true;
// 		}
// 	}

// 	dfsVisited[i] = 0;
// 	return false;
// }


// ❌❌❌❌❌❌❌   Ye achha code nhi h  ❌❌❌❌❌❌❌



// int main(int argc, char const *argv[])
// {
// 	int n , m ;
// 	cin >> n >> m;
// 	vector<vector<int>> graph(n + 1);
// 	for (int i = 0 ; i  < m ; i++) {
// 		int u, v;
// 		cin >> u >> v;
// 		graph[u].push_back(v);
// 		graph[v].push_back(u);
// 	}

// 	for (int i = 1; i <= n; i++) {
// 		cout << i << " ------> ";
// 		for (int j = 0; j < graph[i].size(); j++) {
// 			cout << graph[i][j] << " ";
// 		} cout << endl;
// 	}


// 	vector<int> visited(n + 1, 0);
// 	vector<int> dfsVisited(n + 1, 0);
// 	bool flag = false;
// 	for (int i = 1 ; i <= n ; i++) {
// 		if (!visited[i]) {
// 			if (detectCycle(i, graph, visited, dfsVisited))
// 			{	cout << "YES" << endl;
// 				flag = true;
// 				break;
// 			}
// 		}
// 	}

// 	if (!flag) {
// 		cout << "NO" << endl;
// 	}

// 	return 0;
// }







