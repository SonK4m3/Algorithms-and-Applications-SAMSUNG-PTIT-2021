#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int check(ll a){
	vector<int> v;
	while(a>0){
		v.push_back(a%10);
		a /= 10;
	}
	for(int i = 0; i <= v.size() / 2; i++){
		if(v[i] != v[v.size() - 1 - i])
			return 0;
	}
	return 1;
}

void sang(ll a, ll b){
	int d[b + 1] = {0};
	for(ll i = 2; i <= b; i++){
		if(d[i] == 0){
			for(ll j = i * i; j <= b; j += i)
				d[j] = 1;
		}
	}
	int dem = 10;
	for(ll i = a; i <= b; i++)
		if(d[i] == 0 && check(i) == 1){
			cout << i <<" ";
			dem --;
			if(dem == 0){
				cout << endl;
				dem = 10;
			}
		}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		sang(a, b);
		cout << endl;
	}		
}
