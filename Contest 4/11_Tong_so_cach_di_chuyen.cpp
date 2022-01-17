#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll min(ll a, ll b){
	return (a < b) ? a : b;
}

void process(ll n, ll k){
	ll dp[n + 1] = {0};
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= min(i, k); j++){
			dp[i] += dp[i - j];
			dp[i] %= mod;
		}
	}	
	cout << dp[n] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		process(n, k);
	}
}
