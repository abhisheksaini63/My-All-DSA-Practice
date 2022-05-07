#include<queue>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue <int > q;
	q.push(4);
	q.push(5);
	while (!q.empty())
	{
	    int w=q.front();		
		cout<<w;
		q.pop();
	}
	return 0;
	
}
