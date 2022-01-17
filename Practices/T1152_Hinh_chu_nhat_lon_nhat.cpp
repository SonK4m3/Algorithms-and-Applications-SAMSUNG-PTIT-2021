#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll max(ll a, ll b){
	return (a < b) ? b : a;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		stack<ll> v;
		ll res = INT_MIN;
		int i = 0;
		while(i < n){
			if(v.empty() || arr[i] >= arr[v.top()]){
				v.push(i);
				i++;
			}
			else{
				ll index = v.top();
				v.pop();
				if(v.empty()){
					res = max(res, i * arr[index]);
				}
				else{
					res = max(res, arr[index] * (i - v.top() - 1));
				}
			}
		}
		while(!v.empty()){
			ll index = v.top();
				v.pop();
				if(v.empty()){
					res = max(res, i * arr[index]);
				}
				else{
					res = max(res, arr[index] * (i - v.top() - 1));
				}
		}
		cout << res << endl;
	}
}
