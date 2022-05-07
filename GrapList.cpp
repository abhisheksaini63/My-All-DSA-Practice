#include<bits/stdc++.h>
using namespace std;

int main() {
	map<string, list<string>> g;

	g["Delhi"].push_back("Meerut");
	g["Delhi"].push_back("Ghaziabaad");
	g["Agra"].push_back("Delhi");
	g["Agra"].push_back("Kanpur");


	for (auto v : g) {
		cout << v.first  << " Connected to " ;
		for (auto d : g[v.first]) {
			cout <<  d << ", " ;
		}
		cout << endl;
	}

	return 0;
}