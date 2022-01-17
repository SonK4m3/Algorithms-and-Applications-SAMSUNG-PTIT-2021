#include<bits/stdc++.h>
using namespace std;

int main(){
	long dp[51];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for(int i = 4; i <= 50; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	int t;
	cin >> t;
	while(t--){
		long n; cin >> n;
		cout << dp[n] << endl;
	}
}
