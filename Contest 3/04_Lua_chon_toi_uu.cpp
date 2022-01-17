#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

void process(int n){
	pair<int, int> a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a + n, cmp);
	long dem = 1, j = 0;
	for(int i = 1; i < n; i++){
		if(a[i].first >= a[j].second){
			dem += 1;
			j = i;
		}
	}
	cout << dem << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		process(n);
	}
}
