#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		long long Max = INT_MIN;
		long long curr = 0;
		for(int i = 0; i < n; i++){
			curr = arr[i] + curr;
			if(curr < 0)	curr = 0;
			Max = (Max < curr) ? curr : Max;
		}
		cout << Max << endl;
	}
}
