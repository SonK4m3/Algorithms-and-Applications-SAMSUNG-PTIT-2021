#include<iostream>
using namespace std;

void in(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int Max[n];
	Max[0] = arr[0];
	int res = 0;
	for(int i = 1; i < n; i++){
		Max[i] = max(Max[i - 1], arr[i - 1]);
		res = max(Max[i] - arr[i], res);
	}
	if(res <= 0)
		cout << "Lo nang roi!";
	else
		cout << res;
}
