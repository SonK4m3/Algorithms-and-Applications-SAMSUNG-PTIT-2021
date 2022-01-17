#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> List[1005];
int C[1005][1005];

void Floyd(){
	for(int k = 1; k <= n; k ++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j ++){
				if(C[i][j] > C[i][k] + C[k][j])
					C[i][j] = C[i][k] + C[k][j];
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

		cin >> n >> m;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(i == j) C[i][j] = 0;
				else	C[i][j] = 1e9;
			}
		}
		
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			List[u].push_back(v);
			C[u][v] = 1;
		}
		
		Floyd();
		
		int res = 0;
		int cnt = 0;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++){
				if(i != j && C[i][j] != 1e9){
					cnt += 1;
					res += C[i][j];
				}
			}
			
		cout << fixed << setprecision(2) << (double)res / cnt << endl;
	}
}
