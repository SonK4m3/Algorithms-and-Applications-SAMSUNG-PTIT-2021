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
		for(int i = 0; i < n; i++){
			if(arr[i] != -1){
				int dem = 1;
				for(int j = i + 1; j< n; j++){
					if(arr[j] == arr[i]){
						dem += 1;
						arr[j] = -1;
					}
				}
				if(dem % 2 == 1){
					cout << arr[i] << endl;
					break;
				}
			}
		}
	}
}
