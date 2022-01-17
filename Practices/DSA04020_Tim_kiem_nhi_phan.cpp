#include<bits/stdc++.h>
using namespace std;

int bin_search(int arr[], int d, int c, int k){
	int m = (d + c)/ 2;
	if(d == c){
		if(arr[d] == k)
			return m;
		else
			return -1;
	}
	if(arr[m] < k)
		return bin_search(arr, m + 1, c, k);
	return bin_search(arr, d, m, k);
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
		int index = bin_search(arr, 0, n - 1, k);
		if(index != -1)
			cout << index + 1 << endl;
		else	cout <<"NO" << endl;
	}
}
