#include<iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	string ans = "";
	char curr = 'a';
	for(int i = s.size() - 1; i >= 0; i--){
		if(s[i] == curr){
			ans = s[i] + ans;
		}
		else if(s[i] > curr){
			curr = s[i];
			ans = s[i] + ans;
		}
	}
	cout << ans;
}
