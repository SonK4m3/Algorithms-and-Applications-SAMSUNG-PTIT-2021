#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
vector< vector<int > > res;
int ok[2000] = {0};
bool visit[2000] = {false};

void sang(){
	ok[0] = 1;
	ok[1] = 1;
	for(int i = 2; i <= 2000; i++){
		if(ok[i] == 0){
			for(int j = i * i; j <= 2000; j += i)
				ok[j] = 1;
		}
	}
}

void Try(int i, int k, int sum, vector<int> v){
	
	for(int j = k; j <= n; j++){
			sum += a[j];
			v.push_back(a[j]);
			visit[a[j]] = true;
			if(ok[sum] == 0)
				res.push_back(v);
			else
				Try(i + 1, k + 1, sum, v);
			v.pop_back();
			sum -= a[j];
			visit[a[j]] = false;
//		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	sang();
	
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <=n; i++)
		cin >> a[i];
		sort(a+1, a + n + 1);
		vector<int> v; v.clear();
		res.clear();
		Try(1, 1, 0, v);
		if(res.size() == 0){
			cout << -1 << endl;
			continue;
		}
		for(int i = 0; i < res.size(); i ++){
			for(int j = 0; j < res[i].size() - 1; j++)
				cout << res[i][j] << " ";
			cout << res[i][res[i].size() - 1] << endl;
		}
	}
}
