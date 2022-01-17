#include<bits/stdc++.h>
using namespace std;

int n, k, arr[20];
int c[20];

void in(){
	for(int i = 1; i <= k; i++)
		cout << arr[c[i]] << " ";
	cout << endl;
}

void Try(int i){
	for(int j = c[i - 1] + 1; j <= n; j++){
		c[i] = j;
		if(i == k)	in();
		else	Try(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		sort(arr + 1, arr + n + 1);
		Try(1);
	}
}
