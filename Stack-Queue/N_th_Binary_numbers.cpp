/*_______________________________________
	Name: Show binary numbers from 1 to N 
	Copyright: (C) 2021
	Author: SonK4m3
	Description: 
	
________________________________________*/
#include<iostream>
#include<queue>
using namespace std;

/*
	add 0 or 1 to the end of string to get a next bin number
*/
void ShowBinary(int n){
	
	queue<string> q;
	q.push("1");	// init 1st bin number
	
	while(n --){
		string x= q.front(); q.pop();
		cout << x << " "; 		// print bin number
		// next bin number
		q.push(x + '0');  		
		q.push(x + '1');
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;	// input test case
	while(t--){
		int n;
		cin >> n;
		ShowBinary(n); // process function
	}
}
