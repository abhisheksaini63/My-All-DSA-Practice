#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

class Graph {
	
		map<string , string> city;
	public:	
		
		
		void addEdge(string c1, string c2)
		{
			city[c1] = c2;
		}
		
		
		void showGraph()
		{
			map<string, string> :: iterator p = city.begin();
			while(p != city.end())
			{
				cout << p->first << " connected to city => " << p->second << endl;
				p++;
			}
		}
};


int main()
{
	Graph G;
	/*G.addEdge("Delhi", "Bombay");
	G.addEdge("Bombay", "Delhi");
	G.addEdge("Pune", "Bombay");
	G.addEdge("Agra", "Delhi");*/
	cout << "Enter the number of cities which is connected to each other => " << endl;
	int num ;
	cin >> num;
	for(int i = 0 ;i < num ;i++)
	{
		
	}
	
	
	
	
	
	
	G.showGraph();
}
