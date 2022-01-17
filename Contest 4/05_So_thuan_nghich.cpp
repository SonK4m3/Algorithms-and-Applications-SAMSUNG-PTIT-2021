#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int res = 1;
		for(int i = 0; i < n; i++){
			int l = i, r = i;
			while(l >= 0 && r < n){
				if(s[l] == s[r]){
					res = max(res, r - l + 1);
					l --; r ++;
				}
				else	break;
			}
		} 
		
		for(int i = 0; i < n; i++){
			int l = i, r = i + 1;
			while(l >= 0 && r < n){
				if(s[l] == s[r]){
					res = max(res, r - l + 1);
					l --; r ++;
				}
				else break;
			}
		}
		cout << res << endl;
	}
}
