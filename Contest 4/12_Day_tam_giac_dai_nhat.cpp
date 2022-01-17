#include<bits/stdc++.h>
using namespace std;

void process(int arr[], int n){
	int res = 0;
	int cnt = 1;
	int check[n] = {0};
	for(int i = 1; i <= n; i++){
		if(arr[i] > arr[i - 1]){
			cnt += 1;
		}
		else{
			cnt = 1;
		}
		check[i] = cnt;
	}
	cnt = 0;
	for(int i = n; i >= 1; i--){
		if(arr[i] > arr[i + 1]){
			cnt += 1;
		}
		else{
			cnt = 0;
		}
		res = max(res, check[i] + cnt);
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n + 2];
		arr[0] = INT_MAX;
		arr[n + 1] = INT_MAX;
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		process(arr, n);
	}
}
