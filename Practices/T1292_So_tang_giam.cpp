#include<iostream>
using namespace std;

int check_up(string s){
	for(int i = 0; i < s.size() - 1; i++){
		if(s[i] > s[i + 1])
			return 0;
	}
	return 1;
}

int check_down(string s){
	for(int i = 0; i < s.size() - 1; i++){
		if(s[i] < s[i + 1])
			return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		(check_up(s) == 1 || check_down(s) == 1)? cout << "YES" : cout << "NO";
		cout << endl;
	}
}
