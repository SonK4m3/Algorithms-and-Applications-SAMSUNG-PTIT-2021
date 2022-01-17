#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		vector<int> _new(n);
		int index = 0;
		for(int i = 0; i < n; i += 2){
			_new[i] = v[v.size() - 1 - index++];
		}
		index = 0;
		for(int i = 1; i < n; i += 2){
			_new[i] = v[index++];
		}
		for(int i = 0; i< n; i++){
			cout << _new[i] << " ";
		}
		cout << endl;
	}
}
