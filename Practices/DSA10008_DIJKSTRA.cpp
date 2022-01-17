#include<bits/stdc++.h>
using namespace std;

int n, m, st;
int D[1005], parent[1005];
vector<pair<int, int> > List[1005];

void Dijkstra(){
	priority_queue<vecror<pair<int, int> >, > Q;
	int i, u, v;
	for(i = 1; i <= n; i++){
		D[i] = 1e9;
		parent[i] = -1;
	}
	D[st] = 0;
	while(!Q.empty()) Q.pop();
	Q.push({0, st});
	
	while(!Q.empty()){
		u = Q.top().second; Q.pop();
		for(i = 0; i < List[u].size(); i++){
			v = List[u][i].second;
			int d_u_v = List[u][i].first;
			if(D[u] + d_u_v < D[v]){
				D[v] = D[u] + d_u_v;
				parent[v] = u;
				Q.push({D[v], v});
			}
		}
	}
	for(i = 1; i <= n; i++)
		cout << D[i] << " ";
	cout << endl;
}

int main(){
	int t, u, v, k;
	cin >> t;
	while(t--){
		cin >> n >> m >> st;
		for(int i = 0; i < m; i++){
			cin >> u >> v >> k;
			List[u].push_back({v, k});
		}
	}
	Dijkstra();
}
