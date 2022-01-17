#include <bits/stdc++.h>
using namespace std;

int minJumps(long arr[], int n){
	int res = 0;
	int dp[n + 1];
	dp[0] = 1;
	for(int i = 1; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(arr[i] >= arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		res = max(res, dp[i]);
	}
	return n - res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long arr[n];
		for(int i = 0; i< n; i++)
			cin >> arr[i];
		cout<<minJumps(arr, n) <<endl;
	}
	return 0;
}


