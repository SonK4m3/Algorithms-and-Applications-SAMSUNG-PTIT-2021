#include<bits/stdc++.h>
using namespace std;

int Display(int a){
	set<int> s;
	s.insert(a);
	
	queue<pair<int, int> > q;
	q.push({a, 0});
	
	while(q.size() > 0){
		pair<int, int> tmp = q.front(); q.pop();
		
		if(tmp.first == 1) return tmp.second;
		if(tmp.first - 1 == 1) return tmp.second + 1;
		
		if(tmp.first - 1 > 0 && s.find(tmp.first - 1) == s.end()){
			q.push({tmp.first - 1, tmp.second + 1});
			s.insert(tmp.first - 1);
		}
		
		for(int i = 2; i * i <= tmp.first; i++){
			if(tmp.first % i == 0){
				if(s.find(tmp.first / i) == s.end()){
					q.push({tmp.first/i, tmp.second + 1});
					s.insert(tmp.first / i);
				}
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		cout << Display(a) << endl;
	}
	return 0;
}
