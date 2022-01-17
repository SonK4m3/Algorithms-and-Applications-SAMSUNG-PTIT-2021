#include<bits/stdc++.h>
using namespace std;

long long max(long long a, long long b){
	return a < b ? b : a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long arr[n];
		long long dp[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		dp[0] = arr[0];
		dp[1] = max(arr[0], arr[1]);
		for(int i = 2; i < n; i++)
			dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);
		cout <<dp[n - 1] << endl;
	}
}
