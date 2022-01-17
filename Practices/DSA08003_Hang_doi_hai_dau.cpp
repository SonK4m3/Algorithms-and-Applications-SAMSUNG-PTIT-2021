#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	deque<int> dq;
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSHBACK"){
			int so; cin >> so;
			dq.push_back(so);
		}
		else if(s == "PUSHFRONT"){
			int so; cin >> so;
			dq.push_front(so);
		}
		else if(s == "PRINTFRONT") (dq.size() > 0) ? cout << dq.front() << endl : cout << "NONE\n";
		else if(s == "PRINTBACK") (dq.size() > 0) ? cout << dq.back() << endl : cout << "NONE\n";
		else if(s == "POPFRONT" && dq.size() > 0) dq.pop_front(); 
		else if(s == "POPBACK" && dq.size() > 0)	dq.pop_back();
	}
}
