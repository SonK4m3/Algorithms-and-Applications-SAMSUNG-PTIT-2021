#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	long long Min = *min_element(arr, arr + n);
	long long k = arr[0] / Min;	
	
	long long b[n];
	b[0] = Min;
	while(b[0] > 1){
			if((arr[0] / (b[0] - 1)) == k)
				b[0] -= 1;
			else
				break;
		}
	for(int i = 1; i < n; i++){
		b[i] = arr[i] / k;
		while(b[i] > 1){
			if((arr[i] / (b[i] - 1)) == k)
				b[i] -= 1;
			else
				break;
		}
	}
	long long sum = 0;
	for(int i = 0; i < n; i++)
		sum += b[i];
	cout << sum;
}
