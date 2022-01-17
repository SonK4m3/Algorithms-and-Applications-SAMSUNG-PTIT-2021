#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dp[n];
		int arr[n];
		int res = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			dp[i] = arr[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < i; j++)
				if(arr[i] > arr[j])
					dp[i] = max(dp[i], dp[j] + arr[i]);
			res = max(res, dp[i]);
		}
		cout << res << endl;
	}
}
