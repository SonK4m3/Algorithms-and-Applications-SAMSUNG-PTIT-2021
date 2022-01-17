#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int n = t;
	while(t--){
		char k; cin >> k;
		string s; 
		getline(cin, s);
		s = k + s;
		stack<int> st;
		vector<int> v;
		int dem = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '('){
				dem += 1;
				st.push(dem);
				v.push_back(dem);
			}
			else if(s[i] == ')'){
				v.push_back(st.top());
				st.pop();
			}
		}
		for(int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	}
}

