#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
	return (a < b) ? b : a;
}

int max(int a, int b, int c){
	return max(a, max(b, c));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, p;
		cin >> n >> m >> p;
		string a, b, c;
		cin >> a >> b >> c;
		int dp[n + 1][m + 1][p + 1];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				for(int k = 1; k <= p; k++)
					if(a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])	dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
					else dp[i][j][k] = max(dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]);
			}
		}
		cout << dp[n][m][p] << endl;
	}
}

