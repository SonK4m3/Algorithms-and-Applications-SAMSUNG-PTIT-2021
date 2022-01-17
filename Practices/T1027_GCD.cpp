#include<iostream>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
	if(a == 0)	return b;
	return gcd(b % a, a);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll x, y;cin >> x >> y;
		cout << gcd(x, y) << endl;
	}
}
