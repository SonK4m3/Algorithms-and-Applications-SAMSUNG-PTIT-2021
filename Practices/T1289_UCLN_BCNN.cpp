#include<iostream>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
	if(a == 0)	return b;
	if(b % a == 0)	return a;
	return gcd(b % a, a);
}

ll lcm(ll a, ll b){
	return a * b / gcd(a, b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		cout << gcd(a, b) <<" "<< lcm(a, b) << endl;
	}
}
