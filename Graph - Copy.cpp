#include<bits/stdc++.h>
using namespace std;

class Graph {
	public:
	int V;
	int E;
	int **adj;
};

Graph* adfMatrixOfGraph()
{
	Graph *g = new Graph ();
	
	cout << "Enter the number of Vertices = " ;
	cin >> g->V;
	cout << endl;
		
	cout << "Enter the number of Edges = " ;
	cin >> g->E;
	cout << endl;
	
	g->adj = new int *[g->V];
	for (int i= 0 ;i < g->V; i++)
	{
		g->adj[i] = new int [g->V];
	}
	
	for(int i = 0 ;i < g->V ;i++)
	{
		for (int j =0 ;j < g->V; j++)
		{
			cout << g->adj[i][j] << " " ;
		}
		cout << endl;
	}
	
	cout << "enter the vertices pair which is connected together with edge = ";
	{
		for (int u = 0; u < g->E ;u++)
		{
			int ua, va;
			cin >> ua >> va;
			g->adj[ua][va] = 1;
			g->adj[va][ua] = 1;
		}
	}
	
	return g;	
}

int main()
{
	Graph *G = adfMatrixOfGraph();
	
	for(int i = 0 ;i < G->V; i++)
	 {
	 	for(int j = 0 ;j < G->V; j++)
	 {
	 	cout << G->adj[i][j] << " ";
	 }
	 cout<< endl;
	 }
	 
	
	
	
	
	
}
