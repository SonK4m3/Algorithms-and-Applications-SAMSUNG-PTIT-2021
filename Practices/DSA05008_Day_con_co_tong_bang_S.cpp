#include<iostream>
using namespace std;

bool Sum(int arr[], int n, int k){

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
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		Sum(arr, n, k) == 1 ? cout <<"YES" : cout <<"NO";
		cout << endl;
	}
}
