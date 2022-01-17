#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int dp[1001][1001];

int main(){
	int t, n, k;
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || i == j) dp[i][j] = 1;
			else{
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
			}	
		}
	}
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << dp[n][k] << endl;
	}
}
