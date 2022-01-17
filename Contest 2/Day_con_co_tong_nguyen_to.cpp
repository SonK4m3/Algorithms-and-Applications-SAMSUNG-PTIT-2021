#include<bits/stdc++.h>
using namespace std;

int n, arr[20];
int c[20];

int check(int i){
	if(i < 2)	return 0;
	if(i == 2 || i == 3)	return 1;
	for(int j = 2; j * j <= i; j++)
		if(i % j == 0)
			return 0;
	return 1;
}

void in(){
	int sum = 0;
	for(int i = 1; i <= n; i++)
		if(c[i] == 1){
			sum += arr[i - 1];	
		}
	if(check(sum) == 1){
		for(int i = 1; i <= n; i++)
			if(c[i] == 1)
				cout << arr[i - 1] << " ";
		cout << endl;
	}				
}


void Try(int i){
	if(i == n + 1){
		in();
		return;
	}
	c[i] = 0;
	Try(i + 1);
	c[i] = 1;
	Try(i + 1);
}

bool Less(int i, int j){
	return i > j;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			c[i + 1] = 0;
		}
		sort(arr, arr + n, Less) ;
		Try(1);
	}
}
