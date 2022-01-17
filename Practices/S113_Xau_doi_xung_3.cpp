#include<bits/stdc++.h>
using namespace std;

void in(string s, int l, int r){
	for(int i = l; i <= r; i++)
		cout << s[i];
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int res = 0;
//	if(n % 2 == 1){
		for(int i = 0; i < n; i++){
			int max_res = 1;
			int l = i, r = i;
			while(l >= 0 && r < n){
				if(s[l] == s[r]){
					in(s, l, r);
					max_res = max(max_res, r - l + 1);
					l --; r ++;
				}
				else break;
			}
			res += max_res;
		} 
//	}
//	else{
		for(int i = 0; i < n; i++){
			int max_res = 1;
			int l = i, r = i + 1;
			while(l >= 0 && r < n){
				if(s[l] == s[r]){
					in(s, l, r);
					max_res = max(max_res, r - l + 1);
					l --; r ++;
				}
				else break;
			}
			res += max_res;
		}
//	}
	cout << res << endl;
}

