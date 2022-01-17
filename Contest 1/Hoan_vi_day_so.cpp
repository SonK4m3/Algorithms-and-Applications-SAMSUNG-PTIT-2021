#include<bits/stdc++.h>
using namespace std;

int n, arr[10];
bool ok[100000] = {false};
int c[10] = {0};

void in(){
	for(int i = 1; i <= n; i++)
		cout << c[i] <<" ";
	cout << endl;
}

void Try(int i){
	for(int j = 1 ; j <= n; j++){
		if(ok[arr[j]] == false){
			c[i] = arr[j];
			ok[arr[j]] = true;
			if(i == n)	in();
			else Try(i + 1);
			ok[arr[j]] = false;
		}
	}
}

int main(){
	
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> arr[i];
	sort(arr + 1, arr + n + 1);
	Try(1);
}
