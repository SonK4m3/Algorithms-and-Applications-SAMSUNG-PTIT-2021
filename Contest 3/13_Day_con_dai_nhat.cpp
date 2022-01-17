#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		pair<double, double> arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i].first >> arr[i].second;
		int f[n];
		f[0] = 1;
		int result = 1;
		for(int i = 1; i < n; i++){
			f[i] = 1;
			for(int j = 0; j < i; j++){
				if((arr[i].first > arr[j].first) && (arr[i].second < arr[j].second) && f[i] < f[j] + 1){
					f[i] = f[j] + 1;
				}
			}
		}
		cout << *max_element(f,f + n) << endl;
	}
}
