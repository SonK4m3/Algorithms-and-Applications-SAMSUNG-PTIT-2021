#include<iostream>
using namespace std;
string s;
int k;
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> k >> s;
		for(int i = 0; i < s.size(); i++){
			int vt = s.size() - 1;
			char Max = s[vt];
			for(int j = s.size() - 1; j > i && k > 0; j --){
				if(Max < s[j]){
					Max = s[j];
					vt = j;
				}
			}
			if(Max > s[i] && k > 0){
				swap(s[i], s[vt]);
				k--;
			}
		}
		cout << s << endl;
	}
}
