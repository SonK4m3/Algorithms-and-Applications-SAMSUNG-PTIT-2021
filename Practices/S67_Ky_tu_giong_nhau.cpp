#include<bits/stdc++.h>
using namespace std;

int process(int n, int x, int y, int z){
	if(n == 0) return 0;
	if(n == 1) return x;
	
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	dp[1] = x;
	for(int i = 2; i <= n; i++){
		if(i % 2 == 0){
			dp[i] = min(dp[i - 1] + x, dp[i / 2] + y);
		}
		else
			dp[i] = min(dp[i - 1] + x, dp[(i + 1)/ 2] + y + z);
	} 
	return dp[n];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, y, z;
		cin >> n >> x >> z >> y;
		cout << process(n, x, y, z) << endl;
	}
}
