// Liet ke canh cau bang BFS
#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1005];
bool visit[1005];
vector< pair<int, int> > ans;

void Reset(){
	memset(visit, true, sizeof(visit));
	for(int i = 0; i < 1005; i++)
		adj[i].clear();
}

void BFS(int u){
	queue<int> q;
	q.push(u);
	
	while(q.size() > 0){
		int top = q.front(); q.pop();
		visit[top] = false;
		
		for(int i = 0; i < adj[top].size(); i++){
			int v = adj[top][i];
			if(visit[v]){
				visit[v] = false;
				q.push(v);
			}
		}
	}
}

int TPLT(){
	int res = 0;
	for(int i= 1; i <= n; i++){
		if(visit[i]){
			res ++;
			BFS(i);
		}
	}
	return res;
}

void Canhcau(int canh, int res, vector< pair<int, int> > &tmp){
	for(int i = 0; i < m; i++){
		if(i != canh){
			adj[tmp[i].first].push_back(tmp[i].second);
			adj[tmp[i].second].push_back(tmp[i].first);
		}
	} 
	
	int dem = TPLT(); 
	
	if(dem > res){
		if(tmp[canh].first < tmp[canh].second)
			ans.push_back({tmp[canh].first, tmp[canh].second});
		else
			ans.push_back({tmp[canh].second, tmp[canh].first});
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		Reset();
		ans.clear();
		
		cin >> n >> m;
		vector<pair<int, int> > tmp;
		
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			tmp.push_back({u, v});
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		int res = TPLT();
		
		for(int canh = 0; canh < m; canh ++){
			
			Reset();
			Canhcau(canh, res, tmp);
			
		}
		
		sort(ans.begin(), ans.end());
		
		for(int i = 0; i < ans.size(); i++)
			cout << ans[i].first <<" " << ans[i].second << " ";
		cout << endl; 
	}
	return 0;
}
