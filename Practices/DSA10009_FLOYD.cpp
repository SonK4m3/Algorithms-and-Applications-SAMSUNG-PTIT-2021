#include<iostream>
using namespace std;

int C[1005][1005];
int n, m;
int q;
	
void FLOYD(){
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(C[i][j] > C[i][k] + C[k][j])
					C[i][j] = C[i][k] + C[k][j];
			}
		}
	}
}
	
int main(){
	
	cin >> n >> m; 
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j)	C[i][j] = 0;
			else C[i][j] = 1e9;
		}
	}
	
	for(int i = 0 ; i < m; i ++){
		int x, y, z;
		cin >> x >> y >> z;
		C[x][y] = C[y][x] = z;
	}
	FLOYD();
	
	cin >> q;
	while(q--){
		int u, v;
		cin >> u >> v;
		cout << C[u][v] << endl;
	}
	
	
}
