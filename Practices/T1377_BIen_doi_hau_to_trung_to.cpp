#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		stack<string> res;
		for(int i = 0 ; i< n; i++){
			if(s[i] == '+' || s[i] == '*' || s[i] == '-' || s[i] == '/'){
				string a = res.top(); res.pop();
				string b = res.top(); res.pop();
				string tmp = "(" + b + s[i] + a + ")";
				res.push(tmp);	
			}
			else	res.push(string(1, s[i]));
		}
		cout << res.top() << endl;
	}
}
