#include<iostream>
using namespace std;

int arr[30], n;

void in(){
	for(int i = 1; i <= n; i ++)
		cout << arr[i];
	cout << " ";
}

void Try(int i){
	for(int j = 0; j <= 1; j ++){
		arr[i] = j;
		if(i == n)	in();
		else	Try(i + 1);
	}
}

int main(){
	cin >> n;
	Try(1);
}
