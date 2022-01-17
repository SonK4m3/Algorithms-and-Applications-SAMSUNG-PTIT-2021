#include<iostream>
using namespace std;
#define ll long long



int main(){
	int t;
	cin >>t;
	while(t--){
		int n, m;
		cin >> n >> m;
		ll arr[n][m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> arr[i][j];
		ll dp[n][m];
		dp[0][0] = arr[0][0];
		for(int i = 1; i < n; i++)
			dp[i][0] = arr[i][0] + dp[i - 1][0];
		for(int i = 1; i < m; i++)
			dp[0][i] = dp[0][i - 1] + arr[0][i];
		for(int i = 1; i < n; i++){
			for(int j = 1; j < m; j++){
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + arr[i][j];
			}
		}
		cout << dp[n - 1][m - 1] << endl;
	}
}
