#include<bits/stdc++.h>
using namespace std;

void Process(int n){
	vector<string> v;
	queue<string> q;
	q.push("6");
	q.push("8");
	while(1){
		string x = q.front(); q.pop();
		if(x.size() > n)
			break;
		v.push_back(x);
		q.push(x + '6');
		q.push(x + '8');
	}
	cout << v.size() << endl;
	for(int i = v.size() - 1; i >= 0; i--)
		cout << v[i] <<" ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Process(n);
	}
}
