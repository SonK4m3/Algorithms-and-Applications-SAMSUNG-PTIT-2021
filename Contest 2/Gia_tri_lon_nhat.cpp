#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	long long Max = 0;
	for(int i = 0; i < n; i++){
		long long tmp = Max + abs(arr[i]) + arr[i];
		if(tmp < 0) tmp = 0;
		if(tmp > Max)	Max = tmp;
	}
	cout << Max;
}
