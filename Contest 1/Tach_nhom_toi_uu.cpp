#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	stable_sort(arr, arr + n);
	int dem = 1;
	for(int i = 1; i < n; i++){
		if(arr[i] - arr[i - 1] > k)
			dem ++;
	}	
	cout << dem << endl;
}
