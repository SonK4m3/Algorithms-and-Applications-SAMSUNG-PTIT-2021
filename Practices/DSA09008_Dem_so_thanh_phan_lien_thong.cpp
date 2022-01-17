#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1005];
bool visit[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	
	while(q.size() > 0){
		int top = q.front(); q.pop();
		visit[top] = false;
		
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
		memset(visit, true, sizeof(visit));
		for(int i = 0; i < 1005; i++)
			adj[i].clear();
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		int res = 0;
		
		for(int i = 1; i <= n; i++){
			if(visit[i]){
				res ++;
				BFS(i);
			}
		}
		
		cout << res << endl;
	}
}
