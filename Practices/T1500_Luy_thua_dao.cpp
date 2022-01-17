#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll mod = 1e9 + 7;

ll PowerLL(ll n, ll k){
	if(k == 1)	return n%mod;
	ll tmp = PowerLL(n, k/2);
	if(k % 2 == 0)	
		return (tmp * tmp % mod);
	return (tmp * tmp % mod) * n % mod;
}

ll Reverse(ll n){
	ll k = 0;
	while(n > 0){
		k = k * 10 + n % 10;
		n /= 10;
	}
	return k;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n ;
		cout << PowerLL(n, Reverse(n)) << endl;
	}
}
