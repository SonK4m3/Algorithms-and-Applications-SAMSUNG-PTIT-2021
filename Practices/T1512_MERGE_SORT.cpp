#include<iostream>
using namespace std;
// hop
void merge(int *arr, int l, int m, int r){
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for(int i = 0; i < n1; i++){
		L[i] = arr[l + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = arr[m + 1 + i];
	}
	
	int i = 0, j = 0, k = l;
	
	while(i < n1 && j < n2){
		if(L[i] >= R[j]){
			arr[k] = R[j];
			j++;
		}
		else{
			arr[k] = L[i];
			i++;
		}
		k ++;
	}
	
	while(i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j < n2){
		arr[k] = R[j];
		j ++;
		k ++;
	}
}

//sap xep
void MergeSort(int *arr, int l, int r){
	if(l < r){
		int m = (r + l - 1) / 2;
		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);
		
		merge(arr, l, m, r);
	}
}

void print(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] <<" ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		MergeSort(arr, 0, n - 1);
		print(arr, n);
	}
}
