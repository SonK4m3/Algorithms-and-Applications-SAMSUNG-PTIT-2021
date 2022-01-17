#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, v;
		cin >> n >> v;
		int dp[n + 1][v + 1];
		memset(dp, 0, sizeof(dp));
		pair<int, int> arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i].first;
		for(int i = 0; i < n; i++)
			cin >> arr[i].second;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= v; j++){
				if(j < arr[i].first)
					dp[i][j] = dp[i - 1][j];
				else
					dp[i][j] = max(dp[i - 1][j], arr[i].second + dp[i - 1][j - arr[i].first]);
			}
		}
		cout << dp[n][v] << endl;
	}
	return 0;
}
