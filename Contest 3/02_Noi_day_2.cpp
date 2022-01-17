#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		priority_queue<long, vector<long long>, greater<long long> >q;
		for(int i = 0; i < n; i ++){
			long x; cin >> x;
			q.push(x);
		}
		long long res = 0;
		while(q.size() > 1){
			long long x = q.top() % mod; q.pop();
			long long y = q.top() % mod; q.pop();
			long long tmp = (x + y) % mod;
			res = (res + tmp) % mod;
			q.push(tmp);
		}
		cout << res << endl;
	}
}
