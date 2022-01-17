#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, k;
	cin >> n >> k;
	long double sum = 0;
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		sum += (long double)sqrt(x);
	} 
	cout <<round(double(sum * sum / k));
}
