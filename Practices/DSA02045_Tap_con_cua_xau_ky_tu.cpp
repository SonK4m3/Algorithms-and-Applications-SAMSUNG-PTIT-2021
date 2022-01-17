#include<bits/stdc++.h>
using namespace std;

void SubString(string s,int n,int index ,string &ans, vector<string> &v ){
	if(index == n)
		return;
	if(ans != ""){
		v.push_back(ans);
	}
	for(int i = index + 1; i < n; i++){
		ans += s[i];
		SubString(s, n, i, ans, v);
		ans.erase(ans.size() - 1);
	}
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int index = -1;
		string ans = "";
		vector<string> v;
		SubString(s, n, index, ans, v);
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++)
			cout << v[i] <<" ";
		cout << endl;
	}
}
