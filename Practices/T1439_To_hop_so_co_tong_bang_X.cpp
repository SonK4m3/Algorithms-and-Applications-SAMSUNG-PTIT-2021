#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
vector< vector<int > > res;
void Try(int i, int sum, vector<int> v){
	if(sum > k)
		return;
	if(sum == k){
		res.push_back(v);
		return;
	}
	for(int j = i; j <= n; j++){
		if(sum + a[j] <= k){
			v.push_back(a[j]);
			Try(j, sum + a[j], v);
			v.pop_back();
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <=n; i++)
		cin >> a[i];
		sort(a+1, a + n + 1);
		vector<int> v; v.clear();
		res.clear();
		Try(1, 0, v);
		if(res.size() == 0){
			cout << -1 << endl;
			continue;
		}
		for(int i = 0; i < res.size(); i ++){
			cout << "[";
			for(int j = 0; j < res[i].size() - 1; j++)
				cout << res[i][j] << " ";
			cout << res[i][res[i].size() - 1] << "]";
		}
		cout << endl;
	}
}
