#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll mod = 123456789;

ll PowerLL(ll n, ll k){
	ll res = 1;
	while(k){
		if(k & 1)
			res = res * n % mod;
		k /= 2;
		n = n * n % mod;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << PowerLL(2, n - 1) << endl;
	}
}
