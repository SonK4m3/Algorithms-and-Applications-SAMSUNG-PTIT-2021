#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool ok[1005];

void DFS(int u){
	ok[u] = true;
	for(int i = 0; i < adj[u].size(); i++)
		if(!ok[adj[u][i]]){
			DFS(adj[u][i]);
		}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1001; i++)
			adj[i].clear();
		memset(ok, false, sizeof(ok));
		int a, b;
		cin >> a >> b;
		for(int i = 0; i < b; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		int res = 0;
		for(int i = 1; i <= a; i++){
			if(!ok[i]){
				res++;
				DFS(i);
			}
		}
		cout << res << endl;
	}
}
