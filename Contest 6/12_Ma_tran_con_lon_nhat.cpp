#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum1[402][402] = {0}, sum2[402][402] = {0};
int main(){
	int n;
	cin >> n;
	int mat[n + 1][n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cin >> mat[i][j];
	}
	
	for(int i = 1; i<= n ; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || j == 1){
				sum1[i][j] = mat[i][j];
			}
			else{
				sum1[i][j] = sum1[i - 1][j - 1] + mat[i][j];
			}

		}
	}
	for(int i = 1; i<= n ; i++){
		for(int j = n; j >= 1; j--){
			if(i == 1 || j == n){
				sum2[i][j] = mat[i][j];
			}
			else{
				sum2[i][j] = sum2[i - 1][j + 1] + mat[i][j];
			}

		}
	}
	ll ans = -1e18; 
		for(int i = n; i >= 1; i--){ 
			for(int j = n; j >= 1;j--){ 
				int tmp = min(j, i);
				int hang = i- tmp, cot = j - tmp;
				for(int k = 0; k < min(i, j); k++){
					ans = max(ans, 0ll + sum1[i][j] - sum1[hang + k][cot + k] -
					(sum2[i][cot + k + 1] - sum2[hang+ k][j + 1]));
				}
			}
		} 
	cout<<ans; 	
}

