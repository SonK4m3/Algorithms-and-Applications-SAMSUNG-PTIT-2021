#include<bits/stdc++.h>
using namespace std;

long long max(long long a, long long b){
	return a < b ? b : a;
}

long long min(long long a, long long b){
	return a < b ? a : b;
}

void in(long long arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] <<" ";
	cout << endl; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long arr[n];
		long long Max[n], Min[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		Max[0] = arr[0];
		Min[n - 1] = arr[n - 1];
		for(int i = 1; i < n; i++){
			Max[i] = max(Max[i - 1], arr[i]);
		}
		for(int i = n - 2; i >= 0; i--){
			Min[i] = min(Min[i + 1], arr[i]);
		}
//		in(Max, n);
//		in(Min, n);
		vector<long long> v;
		for(int i = 1; i < n - 1; i++){
			if(Max[i] <= Min[i + 1])
				v.push_back(i + 1);
		}
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
