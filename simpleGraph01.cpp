#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adjList;

void addEdge(int u, int v)
{
	adjList[u].push_back(v);
	adjList[v].push_back(u);
}

void printGraph()
{
	for(int i=0; i<adjList.size(); i++)
	{
		cout << "Adj List of Vertex " << i << endl;
		for(int j=0; j<adjList[i].size(); j++)
			cout << adjList[i][j] << "\t";
		cout << endl;
	}
}

void runSimpleGraph01()
{
	adjList.resize(5);
	addEdge(0,1);
	addEdge(0,4);
	addEdge(1,2);
	addEdge(1,3);
	addEdge(1,4);
	addEdge(2,3);
	addEdge(3,4);
	printGraph();
}
