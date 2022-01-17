#include<bits/stdc++.h>
using namespace std;

int x, y;
vector<pair<int, int> > adj[1005];
bool visit[1005][1005];
int mat[1005][1005];
int dem[1005][1005];


int BFS(pair<int, int> u, pair<int, int> end){
	queue<pair<int, int> > q;
	q.push(u);
	dem[u.first][u.second] = 0;
	while(q.size()){
		pair<int, int> top = q.front(); q.pop();
		visit[top.first][top.second] = true;
		if(u == end) return dem[u.first][u.second];
		for(int i = 0; i < adj[mat[u.first][u.second]]. size(); i++){
			pair<int, int> v = adj[mat[u.first][u.second]][i];
			if(visit[v.first][v.second] == false){
				visit[v.first][v.second] = true;
				dem[v.first][v.second] = dem[top.first][top.second] + 1;
				q.push(v);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(visit, false, sizeof(visit));
		cin >> x >> y;
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				cin >> mat[i][j];
				if(mat[i][j + mat[i][j]] < mat[i + mat[i][j]][j])
					adj[mat[i][j]].push_back({i, j + mat[i][j]});
				else
					adj[mat[i][j]].push_back({i + mat[i][j], j});
			}
		}
		cout << BFS({0, 0}, {x - 1, y - 1});
	}
}

