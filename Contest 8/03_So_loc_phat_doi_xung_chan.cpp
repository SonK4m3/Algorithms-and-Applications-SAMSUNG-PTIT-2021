#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> v;
		
		while(1){
			string x= q.front(); q.pop();
			string y = x;
			reverse(y.begin(), y.end());
			v.push_back(x + y);
			if(v.size() >= n)
				break;
			
			q.push(x + '6');
			q.push(x + '8');
		}
		
		for(int i = 0; i < v.size(); i++)
			cout << v[i] <<" ";
		cout << endl;
	}
}
