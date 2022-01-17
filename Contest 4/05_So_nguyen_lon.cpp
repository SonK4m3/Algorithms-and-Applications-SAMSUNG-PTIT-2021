#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.size(), m = s2.size();
		int mat[n + 1][m + 1];
		memset(mat, 0, sizeof(mat));
		int res = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(s1[i - 1] == s2[j - 1])
					mat[i][j] = mat[i - 1][j - 1] + 1;
				else
					mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
				res = max(res, mat[i][j]);
			}
		}
		
		cout << res << endl;
	}
}
