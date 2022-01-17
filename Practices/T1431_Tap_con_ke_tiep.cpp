#include<iostream>
using namespace std;

void in(int arr[], int k){
	for(int i = 1;i <= k; i++)
		cout << arr[i] <<" ";
	cout << endl;
}

void sinhkt(int arr[], int n, int k){
	int i = k;
	while(i > 0 && arr[i] == n - k + i)
		i--;
	if(i == 0){
		for(int i = 1;i <= k; i++)
			arr[i] = i;
	}
	else{
		arr[i] ++;
		for(int j = i + 1; j <= k; j++)
			arr[j] = arr[i] + j - i;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[k + 1];
		for(int i = 1; i <= k; i++){
			cin >> arr[i];
		}
		sinhkt(arr, n, k);
		in(arr, k);
	}
}
