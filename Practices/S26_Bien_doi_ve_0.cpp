#include <bits/stdc++.h>
using namespace std;


int count(int m){
	if (m == 0)
		return 0;
	else
		return 1 + count(m / 10);
}

int res(int x){
	int c = 0;
	int last = x;

	while (last) {
		int digits = count(last);

		digits -= 1;

		int divisor = pow(10, digits);

		int first = last / divisor;

		int lastnumber = first * divisor;

		int skipped = (last - lastnumber) / first;

		skipped += 1;

		c += skipped;
		last = last - (first * skipped);
	}

	return c;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << res(n) << endl;
	}
	return 0;
}

