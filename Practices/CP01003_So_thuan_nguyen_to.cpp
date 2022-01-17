#include<bits/stdc++.h>
using namespace std;
#define ll long

void sang(int *arr, ll b){
	arr[0] = 1;
	arr[1] = 1;
	for(ll i = 2; i <= b; i++){
		if(arr[i] == 0)
			for(ll j = i * i; j <= b; j += i)
				arr[j] = 1;
	}
}

int check(int arr[], ll a){
	if(arr[a] == 1)
		return 0;
	int sum = 0;
	while(a > 0){
		if(arr[a % 10] == 1)
			return 0;
		sum += a % 10;
		a /= 10;
	}
	if(arr[sum] == 1)
		return 0;
	
	return 1;
}

void allPurePrime(ll a, ll b){
	int arr[b + 1] = {0};
	sang(arr, b);	
	ll dem = 0;
	for(ll i = a; i <= b; i++){
		if(check(arr, i) == 1)
			dem ++;
	}
	cout << dem << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		if(a > b){
			ll tmp = a;
			a = b;
			b = tmp;
		}
		allPurePrime(a, b);
	}
}
