#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int dp[n + 1] = {0};
	int arr[n + 1];
	int res = 0;
	for(int i = 1; i <= n; i++)
		cin >> arr[i];
	for(int i = 1; i <= n; i++){
		dp[i] = 1;
		for(int j = 1; j < i; j++)
			if(arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		res = max(res, dp[i]);
	}
	cout << res;
}
