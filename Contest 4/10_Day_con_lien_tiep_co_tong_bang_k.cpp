#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll check(ll arr[], ll n, ll k){
	ll ans = 0;
	ll pref = 0;
	map<ll, ll> mp;
	mp[pref] ++;
	for(ll i = 0; i < n; i++){
		pref += arr[i];
		ll tmp = pref - k;
		ans += mp[tmp];
		mp[pref] ++;
	}
	
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll arr[n];
		for(ll i = 0; i < n; i++)
			cin >> arr[i];
		(check(arr, n, k) == 0) ? cout << "NO" : cout << "YES";
		cout << endl;
	}
}
