#include<bits/stdc++.h>
using namespace std;

long long arr[20], k;
int c[20], n;
int Min = INT_MAX;
int kq = 0;

void upgrade(){
	int t = 0;
	for(int i = 1; i <= n; i++)
		t+= arr[i] * c[i];
	if(t == k){
		kq = 1;
		int dem = 0;
		for(int i = 1; i <= n; i++)
			if(c[i])
				dem ++;
		cout << dem;
	}
}


void Try(int i){
	for(int j = 1; j >= 0; j--){
			if(kq == 1)
				break;
			c[i] = j;
			if(i == n) upgrade();
			else Try(i + 1);
			
	}	
}

bool Less(long long i, long long j){
	return i > j;
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n, Less) ;
	Try(1);
	if(kq == 0)
		cout << -1;
}

