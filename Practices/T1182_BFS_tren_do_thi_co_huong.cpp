#include<bits/stdc++.h>
using namespace std;

int n, m, u;
int a[1005][1005];
bool visit[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	visit[u] = false;
	while(!q.empty()){
		int x = q.front(); q.pop();
		cout << x <<" ";
		for(int v = 1; v <= n; v ++){
			if(visit[v] && a[x][v]){
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
		memset(a, 0, sizeof(a));
		cin >> n >> m >> u;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
		}
		
		BFS(u);
		cout << endl;
	}
}
