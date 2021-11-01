#include<bits/stdc++.h>
using namespace std;

void input_str(string &s){
	char k;
	cin >> k;
	getline(cin, s);
	s = k + s;
}

void Lower(string &s){
	for(int i = 0; i < s.size(); i++)
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
}

void Init(vector<string> &v, string s){
	stringstream arr(s);
	while(!arr.eof()){
		string tmp;
		arr >> tmp;
		v.push_back(tmp);
	}
}

int main(){
	string s1, s2;
	input_str(s1);
	input_str(s2);
	Lower(s1);
	Lower(s2);
	
	vector<string> v1, v2;
	Init(v1, s1);
	Init(v2, s2);
	
	set<string> Union;
	for(int i = 0 ; i < v1.size(); i++)
		Union.insert(v1[i]);
	for(int i = 0 ; i < v2.size(); i++)
		Union.insert(v2[i]);
	
	set<string> :: iterator it;
	for(it = Union.begin(); it != Union.end(); it++)
		cout << *it <<" ";
	cout << '\n';
	set<string> Interest, tmp;
	for(int i = 0; i < v1.size(); i++)
		tmp.insert(v1[i]);
	for(int i = 0; i < v2.size(); i++){
		if(tmp.count(v2[i]) == 1)
			Interest.insert(v2[i]);
	}
	for(it = Interest.begin(); it != Interest.end(); it++)
		cout << *it <<" ";
}
