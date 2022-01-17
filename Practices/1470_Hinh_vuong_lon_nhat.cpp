#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int mat[n][m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> mat[i][j];
				
		int dp[n][m];
		
		for(int i = 0; i < n; i++)
			dp[i][0] = mat[i][0];
			
		for(int i = 0; i < m; i++)
			dp[0][i] = mat[0][i];
			
		for(int i = 1; i < n; i++){
			for(int j = 1; j < m; j++){
				if(mat[i][j] == 1)
					dp[i][j] = min( dp[i - 1][ j - 1], min(dp[i - 1][j], dp[i][j - 1]) ) + 1;
				else
					dp[i][j] = 0;
			}	
		}	
		int Max = dp[0][0];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(Max < dp[i][j]){
					Max = dp[i][j];
				}
			}
		}
		cout << Max << endl;
	}
}
