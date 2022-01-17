#include<bits/stdc++.h>
using namespace std;
string str = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ"
//int doi(string s, int n, int base, int mod){
//	for(int i = 0; i < s.size() - n; i++){
//		int s_base = 0;
//		for(int j = n - 1; j >= 0; j--){
//			s_base = s_base * base + s[i + j] % base;
//		}
//	}
//}

string doi(int n, int base){
	string k = "";
	while(n > 0){
		k +=  char(n % base + '0');
		n /= base;
	}
	return k;
}

int main(){
//	string s;
//	cin >> s;
//	int k, b, m;
//	cin >> k >> b >> m;
//	int sum = 0;
	int n,k;
	cin >> n >> k;
	cout << doi(n , k);
	
}
