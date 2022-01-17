#include<iostream>
using namespace std;

int arr[30], n, k;
bool Ok[30] = {0};

void in(){
	for(int i = 1; i <= k; i++)
		cout << arr[i] <<" ";
	cout << endl;
}

void Try(int i){
	for(int j = arr[i - 1] + 1; j <= n - k + i; j++){
		arr[i] = j;
		if(i == k)	in();
		else Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}
