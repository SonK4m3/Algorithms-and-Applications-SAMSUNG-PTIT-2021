#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int mat[n][n];
	for(int j = 0; j < n; j++){
		for(int i = 0; i < n - j; i ++){
			int Min = INT_MAX;
			for(int k = i; k < i + j; k++){
				Min = min(Min, arr[k]);
			}
			mat[i][j] = j * Min;
			cout << mat[i][j] <<" ";
		}
		cout << endl;
	}
}
