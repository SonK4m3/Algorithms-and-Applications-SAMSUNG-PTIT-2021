#include<bits/stdc++.h>
using namespace std;

int n, m, u;
bool visited[1005];
vector<int> List[1005];

//DFS theo danh sach canh
//void DFS(int u){
//	cout << u <<" ";
//	visited[u] = false;
//	for(int i = 1; i <= n; i++){
//		if(visited[i] && a[u][i])
//			DFS(i);
//	}
//}

// DFS theo danh sach ke
void DFS(int u){
	visited[u] = false;
	cout << u <<" ";
	
	for(int i = 0; i < List[u].size(); i++){
		int v = List[u][i];
		if(visited[v] == true)
			DFS(v);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(visited, true, sizeof(visited));
		for(int i = 0; i < 1005; i++)	List[i].clear();
		cin >> n >> m >> u;
		for(int j = 0; j < m; j++){
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		
		DFS(u);
		cout << endl;
	}
}
