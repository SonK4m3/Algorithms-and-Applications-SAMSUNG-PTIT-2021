#include<bits/stdc++.h>
using namespace std;

int check(string s){
	stack<char> v;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ']' || s[i] == ')'){	
			if(!v.empty() && s[i] == ')' && v.top() == '(')
				v.pop();
			else if(!v.empty() && s[i] == ']' && v.top() == '[')
				v.pop();
			else
				return 0;
		}
		else if(s[i] == '(' || s[i] == '[')
			v.push(s[i]);
	}
	if(!v.empty())
		return 0;
	return 1;
}

int main(){
	int t;	cin >> t;
	while(t--){
		char k;
		cin >> k;
		string s;
		getline(cin, s);
		s = k + s;
		(check(s)) ? cout << "YES" : cout << "NO";
		cout << endl;
	}
}
