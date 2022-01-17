#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long

bool Sum(ll arr[], int n, ll k){

    bool dp[n + 1][k + 1];
 
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= k; i++)
        dp[0][i] = false;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j < arr[i - 1])
                dp[i][j] = dp[i - 1][j];
            if (j >= arr[i - 1])
                dp[i][j] = dp[i - 1][j]
                               || dp[i - 1][j - arr[i - 1]];
        }
    }
 
    return dp[n][k];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll arr[n];
		ll sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		
		}
		if(sum % 2 == 0){
			ll k = sum / 2;
			Sum(arr, n, k) == 1 ? cout << "YES" : cout << "NO";
			cout << endl;
		}
		else
			cout << "NO" << endl;
	}
}
