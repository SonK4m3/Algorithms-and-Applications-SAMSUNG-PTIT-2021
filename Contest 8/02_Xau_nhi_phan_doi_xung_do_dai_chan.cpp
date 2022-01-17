#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<string> q;
		q.push("0");
		q.push("1");
		vector<string> v;
		
		while(1){
			string x= q.front(); q.pop();
			string y = x;
			reverse(y.begin(), y.end());
			if((x+y).size() > n)
				break;
			v.push_back(x + y);
			q.push(x + '0');
			q.push(x + '1');
		}
		
		for(int i = 0; i < v.size(); i++)
			cout << v[i] <<" ";
		cout << endl;
	}
}
