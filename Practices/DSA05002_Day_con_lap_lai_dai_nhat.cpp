#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int res = 0;
		int dp[n + 1][n + 1];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(s[j - 1] == s[i - 1] && i != j)
					dp[i][j] = dp[i - 1][j - 1] + 1;
				else 
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);			}
		}
		cout << dp[n][n] << endl;
	}
}
