#include<bits/stdc++.h>
using namespace std;

int n, m;
bool ok[1005];
vector<int> List[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);

	while(q.size() > 0){
		int x = q.front(); q.pop();
		ok[x] = true;
		
		for(int v = 0; v < List[x].size() ; v++){
			if(!ok[List[x][v]]){
				q.push(List[x][v]);
				ok[List[x][v]] = true;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i++)
			List[i].clear();
		memset(ok, false, sizeof(ok));
		cin >> n >> m;	
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		long res = 0;
		for(int i = 1; i <= n; i++){
			if(!ok[i]){
				res ++;
				BFS(i);
			}
		}
		res >= 2 ? cout << "NO" : cout << "YES";
		cout << endl;
	}
}
