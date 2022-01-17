#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int check = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++)
				if(arr[j] == arr[i]){
					cout << arr[i];
					check = 1;
					break;
				}
			if(check == 1)
				break;
		}
		if(check == 0)
			cout << "NO";
		cout << endl;
	}
}
