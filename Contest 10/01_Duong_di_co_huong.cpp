#include<bits/stdc++.h>
using namespace std;

int n, m, u, v;
vector<int> adj[1005];
int pred[1005];
bool visit[1005];

void BFS(int u, int v){	
		
	queue<int> q;
	q.push(u);
	
	while(q.size() > 0){
		int x = q.front(); q.pop();
		visit[x] = true;
		if(x == v)	return;
		
		for(int k = 0; k < adj[x].size(); k++){
			int top = adj[x][k];
			
			if(!visit[top]){
				visit[top] = true;
				pred[top] = x;
				q.push(top);
			}
		}
	}
}

void Trace(int u, int v){
	if(!visit[v]){
		cout << -1;
		return;
	}
	stack<int> a;
	
	while(u != v){
		if(u == 0){
			cout << -1;
			return;
		}
		a.push(u);
		u = pred[u];
	}
	a.push(v);
	cout << a.top(); a.pop();
	while(!a.empty()){
		cout <<" -> " << a.top(); a.pop();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i++)
			adj[i].clear();
		memset(visit, false, sizeof(visit));	
		
		cin >> n >> m >> u >> v;
		
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
		}
		
		BFS(u, v);
		Trace(v, u);
		
		cout << endl;
	}
}
