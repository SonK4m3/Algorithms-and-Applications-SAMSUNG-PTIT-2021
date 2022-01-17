#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int check(ll n){
	while(n > 0){
		ll t = n % 10;
		if(t != 2 && t != 3 && t != 5 && t != 7)
			return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	vector<ll> v;
	ll n;
	while(cin >> n){
		if(check(n) == 1)
			v.push_back(n);
	}
	int check = 0;
	for(int i = 0;i < v.size(); i++){
		if(v[i] != -1){
			int dem = 1;
			for(int j = i + 1; j < v.size(); j++)
				if(v[j] == v[i]){
					dem ++;
					v[j] = -1;
				}
			if(check == 0){
				check = 1;
			}
			else
				cout << endl;
			cout << v[i] <<" "<< dem;
		}
	}
}

