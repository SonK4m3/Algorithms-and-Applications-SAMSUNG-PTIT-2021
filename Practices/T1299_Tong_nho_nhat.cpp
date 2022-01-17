#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		long a = 0, b = 0;
		int i = 0;
		for(int i = 0; i< n; i++){
			if(i % 2 == 0){
				a = a * 10 + arr[i];
			}
			else{
				b = b * 10 + arr[i];
			}
		}
		cout << a + b << endl;
	}
}
