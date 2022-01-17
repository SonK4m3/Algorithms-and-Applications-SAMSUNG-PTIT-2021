#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		pair<int, int> a[n];
		for(int i = 0; i< n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a, a + n);
		int check[n] = {0};
		
		int cnt = 0;
		for(int i = 0; i < n - 1; i++){
			if(check[i] == 1 || a[i].second == i)
				continue;
			int tmp = 0;
			int j = i;
			while(!check[j]){
				check[j] = 1;
				j = a[j].second;
				tmp ++;
			}
			if(tmp > 0)
				cnt += tmp - 1;
		}
		cout << cnt << endl;
	}
}

