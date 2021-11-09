/*___________________________________________
	Name: Binary search	
	Copyright: (C) 2021	
	Author: SonK4m3
	Description: 
	
	Binary search algorithm in sorted array
_____________________________________________*/
#include<iostream>
using namespace std;

//compare middle element, if greater then repeat right half otherwise left half 

int BinarySearch(int arr[], int n, int k){
	int l = 0, r = n - 1;
	
	while(l <= r){
		int m = (r + l) / 2;
		if(arr[m] == k)
			return m;
		else if(arr[m] < k)
			l = m + 1;
		else
			r = m - 1;
	}
	
	return -1;
}

void Display(int arr[], int n, int k){
	
	int ind = BinarySearch(arr, n, k); // find index
	
	//print index if found or print NO
	if(ind != -1)
		cout << ind + 1;
	else
		cout <<"NO";
	cout << endl;
}

void Test(){
	int n = 5, k = 10;
	int arr[] = {-1, 2, 6, 10, 28};
	
	Display(arr, n, k);
	//output: 4
}

int main(){
	int t;
	cin >> t;	// input test case
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int i = 0; i < n; i ++)
			cin >> arr[i];
		
		Display(arr, n, k); // print function
		
//		Test(); // test function
	}
}
