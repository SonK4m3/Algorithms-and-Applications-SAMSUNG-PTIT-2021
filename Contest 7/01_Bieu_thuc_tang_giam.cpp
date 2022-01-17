#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int n = t;
	while(t--){
		string s; 
		cin >> s;
		stack<int> v;
		string res = "";
		for(int i = 0; i <= s.size(); i++){
			v.push(i + 1);
			if(i == s.length() || s[i] == 'I'){
				while(!v.empty()){
					res += char(v.top() + '0');
					v.pop();
				}
			}	
		}
		cout << "Test " << n - t << ": " << res << endl;
	}
}

