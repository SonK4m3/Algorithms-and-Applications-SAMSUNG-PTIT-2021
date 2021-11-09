/*__________________________________________
	Name: Missing number
	Copyright: (C) 2021
	Author: SonK4m3
	Description: 
	
	Find a number is missed in array
__________________________________________*/
#include<iostream>
using namespace std;

void Solution(int arr[], int n){
	long Sum_of_n = (n + 1) * n / 2;
	long Sum_of_arr = 0;
	
	for(int i = 0; i  < n - 1; i++)
		Sum_of_arr += arr[i];
		
	cout << Sum_of_n - Sum_of_arr << endl;	
}

int main(){
	int t;
	cin >> t;	//input test case
	while(t--){
		int n;
		cin >> n;	//input number n 
		
		int arr[n - 1];	//input n - 1 numbers
		for(int i = 0; i < n - 1; i++)	
			cin >> arr[i];
		
		Solution(arr, n); // solution function
		
//		Test(); // test function 
	}
}
