#include<bits/stdc++.h>
using namespace std;

int n, m, u;
bool visited[1005];
int a[1005][1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u] = false;
	while(!q.empty()){
		int x = q.front(); q.pop();
		cout << x <<" ";
		for(int v = 1; v <= n; v++){
			if(visited[v] && a[x][v]){
				visited[v] = false;
				q.push(v);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(visited, true, sizeof(visited));
		memset(a, 0, sizeof(a));
		cin >> n >> m >> u;
		for(int j = 0; j < m; j++){
			int x, y;
			cin >> x >> y;
			a[x][y] = a[y][x] = 1;
		}
		
		BFS(u);
		cout << endl;
	}
}
