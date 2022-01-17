#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	stack<char> s1, s2;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '<'){
			if(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
		}
		else if(s[i] == '>'){
			if(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}
		}
		else if(s[i] == '-'){
			s1.pop();
		}
		else
			s1.push(s[i]);
	}
	while(!s2.empty()){
		s1.push(s2.top());
		s2.pop();
	}
	string res = "";
	while(!s1.empty()){
		res = s1.top() + res;
		s1.pop();
	}
	
	cout << res;
}
