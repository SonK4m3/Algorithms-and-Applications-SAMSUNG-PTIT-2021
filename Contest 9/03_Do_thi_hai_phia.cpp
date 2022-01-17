#include<bits/stdc++.h>
using namespace std;

int V, E;
vector<int> adj[1005];

bool BFS(){
	vector<int> pre(V + 1, -1);
	queue<pair<int, int> > q;

	for(int i = 1; i <= V; i++){
		if(pre[i] == -1){
			q.push({i, 0});
			pre[i] = 0;
		}
		
		while(!q.empty()){
			pair<int, int> p =q.front(); q.pop();
			int v = p.first;
			int c = p.second;
			for(int k = 0; k < adj[v].size(); k++){
				int j = adj[v][k];
				
				if(pre[j] == c)
					return 0;
				
				if(pre[j] == -1){
					pre[j] = (c) ? 0 : 1; 
					q.push({j, pre[j]}); 
				}
			}
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i++)
			adj[i].clear();
		cin >> V >> E;
		for(int i = 0; i < E; i++){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		if(BFS() == 1)	cout << "YES\n";
		else	cout << "NO\n";
	}
}
