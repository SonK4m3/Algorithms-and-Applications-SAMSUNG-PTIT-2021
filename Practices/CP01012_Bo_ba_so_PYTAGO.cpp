#include<iostream>
#include<algorithm>
using namespace std;

bool in(long long arr[], int n){
	for(int i = 0; i< n; i++)
		arr[i] = arr[i] * arr[i];
	sort(arr, arr + n);
	for (int i = n - 1; i >= 2; i--) {
        int l = 0; 
        int r = i - 1;
        while (l < r) {
            if (arr[l] + arr[r] == arr[i])
                return true;
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		if( in(arr, n) == 1)	cout <<"YES"<<endl;
		else	cout<<"NO"<<endl;
	}
}
