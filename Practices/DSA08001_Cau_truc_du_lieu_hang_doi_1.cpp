#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int q, val = 0;
		queue<int> dq;
		cin >> q;
		while(q--){
			int so;
			cin >> so;
			if(so == 1)	cout << dq.size() << endl;
			else if(so == 2){
				dq.size() > 0 ? cout << "NO\n" : cout << "YES\n";
			}
			else if(so == 3){
				int n; cin >> n;
				dq.push(n);
			}
			else if(so == 4 && dq.size() > 0) dq.pop();
			else if(so == 5) (dq.size() > 0) ? cout << dq.front() << endl : cout << -1 << endl;
			else if(so == 6) (dq.size() > 0) ? cout << dq.back() << endl : cout << -1 << endl;
			val = so;
		}
		if(val == 3 || val == 4)	cout << endl;
	}
}
