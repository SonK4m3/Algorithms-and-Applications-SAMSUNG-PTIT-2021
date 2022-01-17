#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
	return a.second > b.second;
}

int process(string s, int k){
	vector< pair<char, int> > v;
		int n = s.size();
		for(int i= 0; i < n; i++){
			if(s[i] != '~'){
				int dem = 1;
				for(int  j = i + 1; j < n; j++){
					if(s[j] == s[i]){
						dem += 1;
						s[j] = '~';
					}
				}
				v.push_back( {s[i], dem} );
			}
		}
		sort(v.begin(), v.end(), cmp);
		int check[s.size()] = {0};
		int checkk = 0;
		int index = 0;
		for(int i = 0; i < v.size(); i ++){
			if(check[index] == 1)
				while(check[index] == 1)
					index ++;
				
				for(int j = 0; j < v[i].second; j++){
					if(i + j * k < s.size()){
						check[index + j * k] = 1;
						s[index + j * k] = v[i].first;
					}
					else{
						return - 1;
					}
				}
				index ++;
		}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		string s;
		cin >> k >> s;
		cout << process(s, k) << endl;
	}
}
