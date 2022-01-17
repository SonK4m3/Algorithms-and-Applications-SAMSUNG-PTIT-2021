#include<iostream>
using namespace std;

int n, m;
char arr[100][100];
bool check[100][100];
int a[4] = {-1, 0, 0, 1};
int b[4] = {0, -1, 1, 0};

int isSafe(int row, int col){
	return (row >= 0) && (row < n) && (col >= 0) && (col < m) && (arr[row][col] == '#' && !check[row][col]);
}

void DFS(int i, int j){
	check[i][j] = true;
	for (int k = 0; k < 4; ++k)
		if (isSafe(i + a[k], j + b[k]))
			DFS(i + a[k], j + b[k]);
}

void process(){
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] == '#' && !check[i][j]){
				DFS(i, j);
				count += 1;
			}
		}
	}
	cout << count;
}

int main(){
	cin >> n >> m;
	for(int i= 0; i < n; i++)
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
			check[i][j] = 0;
		}	
	process();
}
