#include<iostream>
using namespace std;

void print(int* arr, int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void process(int arr[], int n){
	int index = 1;
	for(int i = 0 ; i < n - 1 ; i++){
		int check = 0;
		for(int j = 0; j < n - 1 - i ; j++)
			if(arr[j] > arr[j + 1]){
				check = 1;
				swap(arr[j], arr[j + 1]);
			}
		if(check == 1){
			cout  << "Buoc "<< index << ": ";
			print(arr, n);
			index += 1;
		}
		
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i= 0; i< n; i++)
		cin >> arr[i];
	process(arr, n);
}

