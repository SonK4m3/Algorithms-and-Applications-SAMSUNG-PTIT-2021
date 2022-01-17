#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	int odd[n];
	odd[0] = (arr[0] % 2 == 0) ? 0 : 1;
	
	for(int i = 1; i < n; i++){
		odd[i] = odd[i - 1] + arr[i] % 2;
	}
	int res= 0;
	for(int i = 0; i < n - 1; i++){
		if(arr[i] % 2 == 0)
			for(int j = i + 1; j < n; j++){
				if(arr[i] > arr[j] && arr[j] % 2 == 0 && odd[j] - odd[i] > 0)
					res += 1;
			}
	}
	cout << res;
}
