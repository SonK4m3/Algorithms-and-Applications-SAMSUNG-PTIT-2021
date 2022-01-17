#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		char s;
		cin >> a >> s >> b >> s >> c;
		(a + b == c) ? cout << "YES" : cout << "NO";
		cout << endl;
	}
}
