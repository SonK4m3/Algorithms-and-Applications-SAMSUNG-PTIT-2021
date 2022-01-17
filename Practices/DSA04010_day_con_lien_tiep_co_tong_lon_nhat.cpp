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
		long sum = 0;
		long Max = INT_MIN;
		for(int i = 0; i < n; i++){
			sum += arr[i];
			if(sum < 0)	sum = 0;
			if(sum > Max)	
				Max = sum; 
		}
		cout << Max << endl;
	}
}
