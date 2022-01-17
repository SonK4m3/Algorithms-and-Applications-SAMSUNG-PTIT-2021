#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char k; cin >> k;
		string str; getline(cin, str);
		str = k + str;
		
		stringstream arr(str);
		str = "";
		while(!arr.eof()){
			string tmp;
			arr >> tmp;
			str += tmp;
		}
		for(int i = 0; i < str.size(); i++)
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		string res = "";
		stack<string> s;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == ')'){
				int check = 0;
				string tmp = "";
				while(s.top() != "("){
					if(s.top() == "+" || s.top() == "-")
						check = 1;
					tmp = s.top() + tmp;
					s.pop();
				}
				s.pop();
				if((s.size() > 0 && s.top() == "-" && check == 1))
					tmp = '(' + tmp + ')';
				s.push(tmp);					
			}
			else s.push(string(1, str[i]));
		}
		while(!s.empty()){
			res = s.top() + res; s.pop();
		}
		cout << res << endl;
	}	
}

