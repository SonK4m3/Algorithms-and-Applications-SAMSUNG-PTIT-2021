#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
void addEdge(int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool BFS(int s, int V, vector<bool>& visited){
	vector<int> parent(V, -1);

	queue<int> q;

	visited[s] = true;
	q.push(s);

	while (!q.empty()) {

		int u = q.front();
		q.pop();
		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i];
			if (!visited[v]) {
				visited[v] = true;
				q.push(v);
				parent[v] = u;
			}
			else if (parent[u] != v)
				return true;
		}
	}
	return false;
}

bool isCyclicDisconntected(int V){
	vector<bool> visited(V, false);

	for (int i = 0; i < V; i++)
		if (!visited[i] && BFS(i, V, visited))
			return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i++)
			adj[i].clear();
		
		int V, E;
		cin >> V >> E;
		for(int i = 0 ; i < E; i++){
			int x, y; cin >> x >> y;
			addEdge(x, y);
		}
		
		if (isCyclicDisconntected(V))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}

