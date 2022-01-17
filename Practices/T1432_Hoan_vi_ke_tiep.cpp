#include<iostream>
using namespace std;

void in(int *arr, int n){
	for(int i = 1; i<= n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void sinhkt(int arr[], int n){
	int j = n - 1;
	while(j > 0 && arr[j] > arr[j + 1])
		j--;
	if(j > 0){
		int k = n;
		while(arr[j] > arr[k])
			k--;
		int t = arr[k]; arr[k] = arr[j]; arr[j] = t;
		int r = j + 1, l = n;
		while(r <= l){
			t = arr[r]; arr[r] = arr[l]; arr[l] = t;
			r ++; l--;
		}
	}
	else{
		for(int i = 1; i <= n; i++)
			arr[i] = i;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n + 1];
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		sinhkt(arr, n);
		in(arr, n);
	}
}
