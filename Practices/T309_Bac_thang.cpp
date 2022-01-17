#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
void process(ll n, ll k){
	ll dp[n + 1];
	dp[0] = 1;
	for(ll i = 1; i <= n; i++){
		dp[i] = 0;
		for(ll j = 1; j <= min(i, k); j++){
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
		ll n, k; cin >> n >> k;
		process(n, k);
	}
}
