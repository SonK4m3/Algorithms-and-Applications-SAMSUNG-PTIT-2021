#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void Process(ll arr[], ll n){
	stack<ll> s;
	ll dem = 0;	
   	for (ll i = n - 1; i >= 0; i--) {
        if (!s.empty()) {
            while (!s.empty() && arr[s.top()] <= arr[i]) {
                s.pop();
            }
        }
        dem += s.empty() ? n - 1 - i : s.top() - i; 
        s.push(i);
    }
    
	cout << dem;	
}

int main(){
		ll n;
		cin >> n;
		
		ll arr[n];
		for(ll i = 0; i < n; i++)
			cin >> arr[i];
			
		Process(arr, n); // solution and print function
		
}
