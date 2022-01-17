#include<bits/stdc++.h>
using namespace std;

int n, mat[100][100];
vector<string> res; 
bool OK[100][100];

void init(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			cin >> mat[i][j];
			OK[i][j] = false;
		}
	res.clear();
}

void Try(int i, int j, string s){
	if(mat[1][1] == 0 || mat[n][n] == 0)
		return;
	if(i == n && j == n)
		res.push_back(s);
	if(mat[i + 1][j] == 1 && i!= n && !OK[i + 1][j]){
		OK[i][j] = true;
		Try(i + 1, j, s + "D");
		OK[i][j] = false;
	}
	if(mat[i][j + 1] == 1 && j!= n && !OK[i][j + 1]){
		OK[i][j] = true;
		Try(i, j + 1, s + "R");
		OK[i][j] = false;
	}
	if(mat[i - 1][j] == 1 && i!= 1 && !OK[i - 1][j]){
		OK[i][j] = true;
		Try(i - 1, j, s + "U");
		OK[i][j] = false;
	}
	if(mat[i][j - 1] == 1 && j!= 1 && !OK[i][j - 1]){
		OK[i][j] = true;
		Try(i, j - 1, s + "L");
		OK[i][j] = false;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();		
		Try(1, 1, "");
		if(res.size() == 0)
			cout << -1;
		else{
			sort(res.begin(), res.end());
			for(int i = 0; i < res.size(); i++)
				cout << res[i] <<" ";
		}	
		cout << endl;	
	}
}
