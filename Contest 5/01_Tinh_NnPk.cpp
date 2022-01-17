#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		if(n < k)
			cout << 0 << endl;
		else{
			long long P = 1;
			for(long long i = n - k + 1; i <= n; i++)
				P = (P * i) % mod;
			cout << P << endl;
		}
	}
}
