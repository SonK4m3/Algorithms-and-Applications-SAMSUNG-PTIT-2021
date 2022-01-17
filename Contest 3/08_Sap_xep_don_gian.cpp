#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.first < b.first;
}

int main(){
	int n;
	cin >> n;
	pair<int, int> arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i].first;
		arr[i].second = i;
	}
	sort(arr, arr + n, cmp);
	int i;
	for(i = 0; i < n; i++){
		if(arr[i].second > arr[i + 1].second)
			break;
	}
	cout << n - 1 - i;
}
