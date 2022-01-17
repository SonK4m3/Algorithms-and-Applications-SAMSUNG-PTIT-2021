#include<bits/stdc++.h>
using namespace std;

int n, tmp = 0;
int c[20][20];
int x[100];
int FOPT = INT_MAX;
int cmin = INT_MAX;
bool visited[100];

void ncDuLich(int i){
	if(tmp + cmin*(n - i + 1) >= FOPT)
		return;
	for(int j = 2; j <= n; j++){
		if(!visited[j]){
			x[i] = j;
			visited[j] = true;
			tmp += c[x[i - 1]][x[i]];
			if(i == n){
				if(tmp + c[x[n]][1] < FOPT)
					FOPT = tmp + c[x[n]][1];
			} 
			else	ncDuLich(i + 1);
			visited[j] = false;
			tmp -= c[x[i - 1]][x[i]];
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			cin >>c[i][j];
			cmin = min(cmin, c[i][j]);
		}
	x[1] = 1;
	ncDuLich(2);
	cout << FOPT;
	return 0;
}
