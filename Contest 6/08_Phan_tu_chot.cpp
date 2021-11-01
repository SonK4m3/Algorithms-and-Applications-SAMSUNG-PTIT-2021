#include<bits/stdc++.h>
using namespace std;

long long max(long long a, long long b){
	return a < b ? b : a;
}

long long min(long long a, long long b){
	return a < b ? a : b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long arr[n];
		long long Max[n + 1], Min[n + 1];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		Max[0] = INT_MIN;
		Min[n] = INT_MAX;
		Max[1] = arr[0];
		Min[n - 1] = arr[n - 1];
		for(int i = 2; i <= n; i++){
			Max[i] = max(Max[i - 1], arr[i - 1]);
		}
		for(int i = n - 2; i >= 0; i--){
			Min[i] = min(Min[i + 1], arr[i]);
		}

		int res = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] >= Max[i] && arr[i] < Min[i + 1])
				res += 1;
		}
		cout << res << endl;
	}
	return 0;
}
