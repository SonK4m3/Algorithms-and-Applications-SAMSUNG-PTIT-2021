#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void sang(ll n){
	ll arr[n + 1] = {0};
	arr[0] = 1;
	arr[1] = 1;
	for(ll i = 2; i <= n; i++){
		if(arr[i] == 0){
			for(ll j = i * i; j <= n; j += i){
				arr[j]= 1;
			}
		}
	}
	int check = 0;
	for(ll i = 2; i <= n; i++){
		if(arr[i] == 0 && arr[n - i] == 0){
			cout << i <<" "<< n - i << endl;
			check = 1;
			break;
		}
	}
	if(check == 0)
		cout << -1 << endl;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		sang(n);
	}
}
