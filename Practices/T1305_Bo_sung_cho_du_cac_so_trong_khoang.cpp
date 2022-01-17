#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i< n; i++){
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int cnt = 0;
		for(int i = 1; i < n; i++){
			int dis = arr[i] - arr[i - 1];
			if(dis > 1)
				cnt += dis - 1;
		}
		cout << cnt << endl;
	}
}
