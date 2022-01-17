#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll    oo = 1000000000000000001ll;
ll p[20] = {0,2,3,5,7,11,13,17,19,23,29};
ll n, res;

void solve(int i, ll ans, int cnt) {
	if (cnt > n)  return ;
	if (cnt == n) res = min(res, ans);
	for (int j=1;; j++) {
		if (ans*p[i] > res) break;
		ans *= p[i];
		if (ans < 0) break;
		solve(i+1, ans, cnt*(j+1));
	}
}


int main() {
	int t;
	cin >> t;
	while(t--){
		res = oo;
		cin >> n;
		solve(1,1,1);
		cout << res << endl;
	}
	return 0;
}
