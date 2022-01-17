#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s, n;
		cin >> s >> n;
		stack<int> v;
		while(s > 0){
			n --;
			v.push(9);
			s -= 9;
		}
		if(n < 0)
			cout << -1 << endl;
		else{
			if(s <= 0){
				s = s + v.top();
				v.pop();
			}
			if(n == 0)
				v.push(s);
			else{
				v.push(s - 1);
				n --;
				while(n > 0){
					n--;
					v.push(0);
				}
				v.push(1);
			}
			while(!v.empty()){
				cout << v.top();
				v.pop();
			}
			cout << endl;
		}	
	}
}
