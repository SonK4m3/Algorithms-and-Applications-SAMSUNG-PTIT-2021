#include<bits/stdc++.h>
using namespace std;

int n, m, u;
bool visit[1005];
int mat[1005][1005];

// DFS theo danh sach canh
void DFS(int u){
	visit[u] = false;
	cout << u <<" ";
	for(int i = 1; i <= n; i++){
		if(visit[i] && mat[u][i])
			DFS(i);
	}
}

//DFS theo danh sach ke
//void DFS(int u){
//	cout << u << " ";
//	visti[u] =false;
//	
//	for(int i = 0; i < List[u].size(); i++){
//		int v = List[u][i];
//		if(visit[v])
//			DFS(v);
//	}
//}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(visit, true, sizeof(visit));
		memset(mat, 0, sizeof(mat));
		cin >> n >> m >> u;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			mat[x][y] = 1;
		}
		DFS(u);
		cout << endl;
	}
}
