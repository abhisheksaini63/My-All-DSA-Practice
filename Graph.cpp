#include<bits/stdc++.h>
using namespace std;
class edge {
public:
	int src, nbr, wgt;
	edge(int s, int n , int w) {
		src = s ;
		nbr = n;
		wgt = w;
	}
};

int main() {
	vector<vector<edge>> g;
	edge *one = new edge(0, 1, 10);
	edge *two = new edge(0, 3, 40);
	edge *three = new edge(1, 0, 10);
	edge *four = new edge(1, 2, 10);
	edge *five = new edge(2, 1, 10);
	edge *six = new edge(2, 3, 10);
	edge *seven = new edge(3, 0, 40);

	g[0].push_back(new edge(0, 1, 10));
	g[0].push_back(two);

	g[1].push_back(three);
	g[1].push_back(four);

	g[2].push_back(five);
	g[2].push_back(six);

	g[3].push_back(seven);
	// g[3].push_back(new edge(3, 2, 10));

	// g[4].push_back(new edge(4, 3, 2));
	// g[4].push_back(new edge(4, 5, 3));
	// g[4].push_back(new edge(4, 6, 8));

	// g[5].push_back(new edge(5, 4, 3));
	// g[5].push_back(new edge(5, 6, 3));

	// g[6].push_back(new edge(6, 4, 8));
	// g[6].push_back(new edge(6, 5, 3));


	for (int i = 0 ; i <  7 ; i++) {
		for (int j = 0 ; j < g[i].size(); j++) {
			cout << g[i][j].src << " " << g[i][j].nbr << " " << g[i][j].wgt << endl;
		}
		cout << endl;
	}


}