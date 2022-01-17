#include<bits/stdc++.h>
using namespace std;
#define ll long long
void process(ll arr[], int n){
	ll max_sum = INT_MIN;
    ll U[n], D[n];
    for (int i = 0; i < n; i++) {
        D[i] = arr[i];
        U[i] = arr[i];
    }
 
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && U[i] < U[j] + arr[i])
                U[i] = U[j] + arr[i];
 
    for (int i = n - 2; i >= 0; i--)
        for (int j = n - 1; j > i; j--)
            if (arr[i] > arr[j] && D[i] < D[j] + arr[i])
                D[i] = D[j] + arr[i];
 
    for (int i = 0; i < n; i++)
        max_sum = max(max_sum, (D[i] + U[i] - arr[i]));
 
    cout << max_sum << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		process(arr, n);
	}
}
