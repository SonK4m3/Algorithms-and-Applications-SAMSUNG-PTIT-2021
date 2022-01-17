#include<bits/stdc++.h>
using namespace std;

int n, arr[21], c[21] = {0};

void upgrade(){
	for(int i = 1 ; i <= n; i++){
		if(c[i])
		cout << arr[i - 1] <<" ";
	}
	cout << endl;
}

void Try(){
	int k = 1;
	while(1){
		if(k < 1){
			cout <<"NO" << endl;
			return;
		}
		if(k > n){
			upgrade();
			return;
		}
		if(arr[k] < arr[k + 1])	c[k + 1] = 1;
		else	k--;
	}
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
 	Try();	
}
