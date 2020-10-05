#include <iostream>
#include <vector>
#include <queue>

using namespace std;

static vector<vector<int>> adj;
static queue<int> que;

enum
{
	UNVISITED = 0,
	QUEUED,
	VISITED
};

static void addEdge(int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

static void BFS(int vertex, vector<bool> &visited)
{
	que.push(vertex);
	while(!que.empty())
	{
		int front = que.front();
		cout << front << "\t";
		visited[front] = VISITED;
		que.pop();
		for(int i=0; i<adj[front].size(); i++)
		{
			if(visited[adj[front][i]] == UNVISITED)
			{
				visited[adj[front][i]] = QUEUED;
				que.push(adj[front][i]);
			}
		}
	}
	cout << endl;
}

void runBFS01()
{
	adj.resize(7);
	vector<bool> visited(7,UNVISITED);
	addEdge(0,3);
	addEdge(0,6);
	addEdge(1,2);
	addEdge(1,3);
	addEdge(1,4);
	addEdge(2,1);
	addEdge(2,4);
	addEdge(2,5);
	addEdge(3,0);
	addEdge(3,1);
	addEdge(3,4);
	addEdge(4,1);
	addEdge(4,2);
	addEdge(4,3);
	addEdge(5,2);
	addEdge(5,6);
	addEdge(6,0);
	addEdge(6,5);
	BFS(0,visited);
}
