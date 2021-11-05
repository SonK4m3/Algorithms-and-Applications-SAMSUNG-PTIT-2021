/*_____________________________________
	Name: FES of FEB
	Copyright: (C) 2021
	Author: SonK4m3
	Description:
	define	FES : First element smaller
			FEB : First element bigger 
_____________________________________*/
#include<iostream>
#include<stack>
using namespace std;

/**
	we find index of FES and FEB of each element
	we print value of index FES of FEB of current element
**/
void Process(int arr[], int n){
	stack<int> s_bigger, s_smaller;
	int id_bigger[n], id_smaller[n];
	
	// find index of FEB
   	for (int i = n - 1; i >= 0; i--) {
        if (!s_bigger.empty()) {
            while (!s_bigger.empty() && arr[s_bigger.top()] <= arr[i]) {
                s_bigger.pop();
            }
        }
        id_bigger[i] = s_bigger.empty() ? -1 : s_bigger.top();

        s_bigger.push(i);
    }
	
	// find index of FES    
    for (int i = n - 1; i >= 0; i--) {
        if (!s_smaller.empty()) {
            while (!s_smaller.empty() && arr[s_smaller.top()] >= arr[i]) {
                s_smaller.pop();
            }
        }
	    id_smaller[i] = s_smaller.empty() ? -1 : s_smaller.top();
	        
	    s_smaller.push(i);
	}
	
	//print array   
	for(int i = 0; i < n; i++)
		if(id_bigger[i] == -1)
			cout << -1 <<" ";
		else if(id_smaller[id_bigger[i]] == -1)
				cout << -1 << " ";
		else
			cout << arr[id_smaller[id_bigger[i]]] <<" ";
	cout << endl;	
}

void Test(){
	int n = 7;
	int arr[] = {5, 1, 9, 2, 5, 1, 7};
	
	Process(arr, n);
	// output 2 2 -1 1 -1 -1 -1
}

int main(){
	int t;
	cin >> t;	// inptu test case
	while(t--){
		int n;
		cin >> n;
		
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		
		Process(arr, n);	// Solution and print function
		
//		Test(); // test function
	}
}

