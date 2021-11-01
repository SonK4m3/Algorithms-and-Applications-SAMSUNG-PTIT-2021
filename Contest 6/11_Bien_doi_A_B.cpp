#include<iostream>
using namespace std;

long long a[1000005];
long long b[1000005];

int main(){
	a[-1] = 0;
	b[-1] = 0;
	string s;
	cin >> s;
	for(long long i = 0; i < s.length(); i++){
		if(s[i] =='A'){
			a[i] = a[i - 1];
			b[i] = 1 + min(b[i-1], a[i]);
		}else{
			b[i] = b[i-1];
			a[i] = 1 + min(b[i], a[i - 1]);
		}
	}
	cout << a[s.length() - 1];
}
