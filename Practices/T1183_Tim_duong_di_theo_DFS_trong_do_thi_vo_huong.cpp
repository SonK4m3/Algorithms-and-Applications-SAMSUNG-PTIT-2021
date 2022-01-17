#include<bits/stdc++.h>
using namespace std;

int n, m, u, v;
bool visit[1005];
int pred[1005];
vector<int> List[1005];

void DFS(int u, int v){
	if(!visit[v])
		return;
	visit[u] = false;
	for(int i = 0; i < List[u].size(); i++){
		if(visit[List[u][i]]){
			pred[List[u][i]] = u;
			DFS(List[u][i], v);
		}
	}
}

void Trace(int v, int u){
	if(visit[u]){
		cout << - 1;
		return;
	}
	stack<int> a;
	while(v != u){
		a.push(v);
		v = pred[v];
	}
	a.push(v);
	
	while(!a.empty()){
		cout << a.top()<<" "; a.pop();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i++)
			List[i].clear();
		memset(visit, true, sizeof(visit));
		cin >> n >> m >> u >> v;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		
		DFS(u, v);
		Trace(v, u);
		
		cout << endl;
	}
}
