#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> List[n + 1];
		
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		
		for(int i = 1; i <= n; i++){
			cout <<i <<": ";
			for(int j = 0; j < List[i].size(); j++)
				cout << List[i][j] <<" ";
			cout << endl;
		}
	}
}
