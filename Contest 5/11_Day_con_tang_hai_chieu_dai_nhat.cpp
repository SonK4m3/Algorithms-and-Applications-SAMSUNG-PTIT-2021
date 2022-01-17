#include<bits/stdc++.h>
using namespace std;

long max(long a, long b){
	return a < b ? b : a;
}

int main(){
	int n;
		cin >> n;
		pair<long, long> arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i].first >> arr[i].second;
		long f[n];
		f[0] = 1;
		long res = 1;
		for(int i = 1; i < n; i++){
			f[i] = 1;
			for(int j = 0; j < i; j++){
				if((arr[i].first > arr[j].first) && (arr[i].second > arr[j].second) && f[i] < f[j] + 1){
					f[i] = f[j] + 1;
				}
			}
			res = max(res, f[i]);
		}
		cout << res << endl;
}
