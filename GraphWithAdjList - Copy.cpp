#include<bits/stdc++.h>
#include<list>
using namespace std;

class Graph {
	public:
		int V;
		list <int> *l;
		
	Graph(int V)
	{
		this->V = V;
		l = new list <int> [V];
	}
	
	void addEdge(int x, int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	
	
	void showGraph()
	{
		for(int i = 0; i < V; i++)
		{
			cout << "Vertex ->"<< i << " is connected to =>";
			for(int a : l[i])
			{
				cout << a << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	Graph G(4);
	G.addEdge(0,1);
	G.addEdge(0,2);
	G.addEdge(0,3);
	G.addEdge(1,2);
	G.addEdge(2,3);
	
	G.showGraph();
}
