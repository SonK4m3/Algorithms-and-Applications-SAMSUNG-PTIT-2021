/*_________________________________
	Name: First right element bigger
	Copyright: (C) 2021
	Author: SonK4m3
	Description:

_________________________________*/
#include<iostream>
#include<stack>
using namespace std;

/**
	we push to the stack visited element and find in stack for element is bigger 
	than current element
**/
void Process(long long arr[], int n){
	stack<long long> s;
	long long res[n];
	
   	for (int i = n - 1; i >= 0; i--) {
        if (!s.empty()) {
            while (!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }
        }
        res[i] = s.empty() ? -1 : s.top();
        
		// has visited
        s.push(arr[i]);
    }
    
    //print array
    for (int i = 0; i < n; i++)
      	cout << res[i] <<" ";
	cout << endl;	
}

void Test(){
	int n = 4;
	long long arr[] = {4, 5, 2, 25};
	
	Process(arr, n);
	//output: 
}

int main(){
	int t;
	cin >> t;	// input test case
	while(t--){
		int n;
		cin >> n;
		
		long long arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
			
		Process(arr, n); // solution and print function
		
//		Test(); // test function
	}
}
