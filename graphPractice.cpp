#include<bits/stdc++.h>
using namespace std;


//------------------✍ BFS ✍------------------//

void BFS(int n , map<int, list<int>> &graph) {
	vector<int> visited(n + 1, 0);

	for (auto it : graph) {
		if (!visited[it.first]) {
			queue<int> q;
			q.push(it.first);
			visited[it.first] = 1;
			while (!q.empty()) {
				int val = q.front();
				q.pop();
				cout << val << " ";

				for (auto v : graph[val]) {
					if (!visited[v]) {
						q.push(v);
						visited[v] = 1;
					}
				}

			}
		}
	}
}



// //------------------✍ DFS ✍------------------//



void DFS_Solution(int i , map<int , list<int> > &graph, vector<int> &visited) {
	cout << i << " ";
	visited[i] = 1;

	for (auto it : graph[i]) {
		if (!visited[it]) {
			DFS_Solution(it, graph, visited);
		}
	}
}

void DFS(int n , map<int, list<int>> &graph) {
	vector<int> visited(n + 1, 0);
	for (auto it : graph) {
		if (!visited[it.first]) {
			DFS_Solution(it.first, graph, visited);
		}
	}
}




// //------------------✍ CYCLE DETECTION BY BFS ✍------------------//


bool checkCycleByBFS(int n , map<int, list<int>>&graph) {
	vector<int> visited(n + 1, 0);

	for (auto it : graph) {
		if (!visited[it.first]) {
			queue <pair<int, int>> nodesQ;
			nodesQ.push({it.first, -1});
			visited[it.first] = 1;
			while (!nodesQ.empty()) {
				auto node = nodesQ.front();

				int val = node.first;
				int par = node.second;
				nodesQ.pop();

				for (auto value : graph[val]) {
					if (!visited[value]) {
						nodesQ.push({value, val});
						visited[value] = 1;
					}
					else if (value != par) {
						return true;
					}
				}
			}
		}
	}
	return false;
}


// //------------------✍ CYCLE DETECTION BY DFS ✍------------------//



bool checkCycleDFS(int node, int par, map<int , list<int>>&graph, vector<int> &visited) {
	visited[node] = 1;
	for (auto it : graph[node]) {
		if (!visited[it]) {
			if (checkCycleDFS(it, node, graph, visited))return true;
		}
		else if (it != par) {
			return true;
		}
	}

	return false;
}


bool checkCycleByDFS(int n , map<int, list<int>> &graph) {
	vector<int> visited(n + 1, 0);

	for (auto it : graph) {
		if (!visited[it.first]) {
			if (checkCycleDFS(it.first, -1, graph, visited)) {
				return true;
			}
		}
	}
	return false;
}




// //------------------✍ BIPARTITE GRAPH BY BFS ✍------------------//



bool checkBipartiteByBFS(int n, map<int, list<int>> &graph) {
	// vector<int> visited(n + 1, 0);
	vector<int> color(n + 1, -1);

	for (auto it : graph) {
		if (color[it.first] == -1) {
			queue<int> q;
			q.push(it.first);
			// visited[it.first] = 1;
			color[it.first] = 1;

			while (!q.empty()) {
				int node = q.front();
				q.pop();

				for (auto v : graph[node]) {
					if (color[v] == -1) {
						// visited[v] = 1;
						color[v] = 1 - color[node];
						q.push(v);
					}
					else if (color[v] == color[node]) return false;
				}
			}
		}
	}
	return true;
}




// //------------------✍ BIPARTITE GRAPH BY DFS ✍------------------//


bool checkBipartiteByDFS_solution(int src , map<int, list<int>>&graph, vector<int> &color) {
	if (color[src] == -1)color[src] = 1;

	for (auto it : graph[src]) {
		if (color[it] == -1) {
			color[it] = 1 - color[src];
			if (!checkBipartiteByDFS_solution(it, graph, color)) return false;
		}
		else if (color[it] == color[src]) return false;
	}
	return true;
}

bool checkBipartiteByDFS(int n , map<int, list<int>>&graph) {
	vector<int> color(n + 1, -1);

	for (auto it : graph) {
		if (color[it.first] == -1) {
			if (!checkBipartiteByDFS_solution(it.first, graph, color))return false;
		}
	}
	return true;
}




//------------------✍ DETECT CYCLE IN DIRECTED GRAPH BY DFS ✍------------------//

// Note:-🙋‍♂️🙋‍♂️🙋‍♂️🙋‍♂️--->>> We can use topological sort for detect cycle
// ---------------------------in directed graph as well by taking a count variable,
// ----------------------------but it is not the perfect solution so please don't use
// --------------------------- this technique in your interview

bool checCycleDirectedDFS_solution(int src, map<int, list<int>>&graph, vector<int> &vis, vector<int> &dfsVis) {
	vis[src] = 1;
	dfsVis[src] = 1;

	for (auto it : graph[src]) {
		if (!vis[it]) {
			if (checCycleDirectedDFS_solution(it, graph, vis, dfsVis)) return true;
		}
		else if (dfsVis[it]) {
			return true;
		}
	}
	dfsVis[src] = 0;
	return false;
}

bool checCycleDirectedDFS(int n , map<int, list<int>> &graph) {
	vector<int> visited(n + 1, 0);
	vector<int> dfsVis(n + 1, 0);

	for (auto it : graph) {
		if (!visited[it.first]) {
			if (checCycleDirectedDFS_solution(it.first, graph, visited, dfsVis)) return true;
		}
	}
	return false;
}


// //------------------✍ TOPOLOGICAL SORTING DFS (ONLY APPLY ON DAG) ✍------------------//

void topologicalSort_solution(int i , map<int, list<int>> &graph, vector<int> &visited, vector<int> &ans) {
	visited[i] = 1;
	for (auto it : graph[i]) {
		if (!visited[it] ) {
			topologicalSort_solution(it, graph, visited, ans);
		}
	}

	ans.push_back(i);
}
vector<int> topologicalSort_DFS(int n , map<int , list<int>>&graph) {
	vector<int> visited(n + 1, 0);
	vector<int> ans;

	for (int i = 0 ; i < n; i++) {
		if (!visited[i]) {
			topologicalSort_solution(i, graph, visited, ans);
		}
	}

	return ans;
}






// //------------------✍ TOPOLOGICAL SORTING BFS (ONLY APPLY ON DAG) ✍------------------//


vector<int> topologicalSort_BFS(int n , map<int, list<int>> &graph) {
	queue<int> q;
	vector<int> indegree(n + 1, 0);
	vector<int> topo;

	for (auto it : graph) {
		for (auto val : graph[it.first]) {
			indegree[val]++;
		}
	}

	for (int i = 0 ; i < n ; i++) {
		if (indegree[i] == 0) {
			q.push_back(i);
		}
	}

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		topo.push_back(node);
		for (auto it : graph[node]) {
			indegree[it]--;
			if (indegree[it]  == 0 ) q.push(it);
		}
	}

	return topo;
}




// //------------------✍ FIND MINIMUM DISTANCE (BFS) ✍------------------//

int minDist(int n, map<int, list<int>> &graph, int src , int destination) {

	queue<int> q;
	vector<int> dista(n + 1, INT_MAX);
	q.push(src);
	dista[src] = 0;

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		int distance = dista[node];

		for (auto it : graph[node]) {
			int totalD = distance + 1;
			if (totalD < dista[it]) {
				dista[it] = totalD;
				q.push(it);
			}
		}
	}
	return dista[destination];
}




int main(int argc, char const *argv[])
{
	int n , m;
	cin >> n >> m;
	map<int, list<int>> graph;
	for (int i  = 0 ; i < m ; i++) {
		int u , v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (auto it : graph) {
		cout << it.first << " ----> ";
		for (int val : it.second) {
			cout << val << " ";
		} cout << endl;
	}


	BFS(n, graph);

	DFS(n, graph);

	bool cycle = checkCycleByBFS(n, graph);
	if (cycle) cout << "YES" << endl;
	else cout << "NO" << endl;


	bool cycle = checkCycleByDFS(n, graph);
	if (cycle) cout << "YES" << endl;
	else cout << "NO" << endl;

	bool Bipartite = checkBipartiteByBFS(n, graph);
	if (Bipartite) cout << "YES" << endl;
	else cout << "NO" << endl;

	bool Bipartite = checkBipartiteByDFS(n, graph);
	if (Bipartite) cout << "YES" << endl;
	else cout << "NO" << endl;


	bool CycleDirectedDFS = checCycleDirectedDFS(n, graph);
	if (CycleDirectedDFS) cout << "YES" << endl;
	else cout << "NO" << endl;


	vector<int> topoSort = topologicalSort_DFS(n , graph);
	for (int i = topoSort.size() - 1 ; i >= 0; i--) {
		cout << topoSort[i] << " ";
	}


	vector<int> topoSort = topologicalSort_BFS(n , graph);
	for (auto it :  topoSort) {
		cout << it << " ";
	}


	int sortest_Distance = minDist(n, graph, 0 , 6);
	cout << sortest_Distance << endl;

	return 0;
}