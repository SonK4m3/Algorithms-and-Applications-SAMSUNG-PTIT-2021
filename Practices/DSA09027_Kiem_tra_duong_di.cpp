#include<bits/stdc++.h>
using namespace std;

int n, m, Q;
vector<int> adj[1005];
bool visit[1005];

void BFS(int u, int v){
	queue<int> q;
	q.push(u);
	
	while(q.size() > 0){
		int top = q.front(); q.pop();
		visit[top] = false;
		if(top == v)	return;
		for(int i = 0; i < adj[top].size(); i++){
			int v = adj[top][i];
			if(visit[v]){
				visit[v] = false;
				q.push(v);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
//		memset(visit, true, sizeof(visit));
		for(int i = 0; i <= 1005; i++)
			adj[i].clear();
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		cin >> Q;
		for(int i = 0; i < Q; i++){
			int x, y;
			cin >> x >> y;
			memset(visit, true, sizeof(visit));
			BFS(x, y);
			visit[y] ? cout << "NO\n" : cout << "YES\n";
		}
	}
}
