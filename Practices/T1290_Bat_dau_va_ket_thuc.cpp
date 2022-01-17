#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		(s[0] == s[s.size() - 1]) ? cout << "YES" : cout << "NO";
		cout << endl;
	}
}
