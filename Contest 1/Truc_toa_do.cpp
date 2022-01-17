#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

void xuly(int n){
	pair<int, int> a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a + n, cmp);
	int cnt = 1, j = 0;
	for(int i = 1; i < n; i++){
		if(a[i].first >= a[j].second){
			cnt += 1;
			j = i;
		}
	}
	cout << cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		xuly(n);
	}
}
