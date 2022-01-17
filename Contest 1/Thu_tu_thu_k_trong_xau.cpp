#include<iostream>
using namespace std;

string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

long long pow(int n, int base = 2){
	return (n < 1) ? 1 : (pow(n - 1) * 2);
}

long long IndexVal(long long l, long long r, long long k, int n){
	long long m = (l + r) / 2;
	if(k == m) 
		return  n;
	if(k < m)
		return IndexVal(l, m - 1, k, n - 1);
	return IndexVal(m + 1, r, k, n - 1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		cout << s[IndexVal(1, pow(n) - 1, k, n) - 1] << endl;
	}
}
