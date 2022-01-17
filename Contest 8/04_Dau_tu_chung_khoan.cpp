#include<bits/stdc++.h>
using namespace std;

void Process(int arr[], int n){
	stack<int> s;
	int res[n];
   	for (int i = 0; i < n; i++) {
        if (!s.empty()) {
            while (!s.empty() && arr[s.top()] <= arr[i]) {
                s.pop();
            }
        }
        res[i] = s.empty() ? i + 1 : i - s.top(); 
        s.push(i);
    }
    for(int i = 0; i < n; i++)
    	cout << res[i] << " ";
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
			
		Process(arr, n); // solution and print function
	}
}
