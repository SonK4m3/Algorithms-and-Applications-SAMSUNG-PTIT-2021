#include<iostream>
using namespace std;
long long arr[30], a[30], s;
int n;
bool OK = false;

void sinh(int k){
	int i = k;
	while(i > 0 && arr[i] == n-k+i ) i--;
	if(i > 0){
		arr[i] ++;
		for(int j = i + 1; j <= k; j++)
			arr[j] = arr[j - 1] + 1;
	}
	else	OK = true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		OK = false;
		int check = 0;
		cin >> n >> s;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i = 1; i <= n; i++){
			OK = false;
			for(int j = 1; j <= i; j++){
				arr[j] = j;
			}
			while(!OK){
				long long sum = 0;
				for(int j = 1; j <= i; j++)
					sum += a[arr[j]];
				if(sum == s){
					cout << i << endl;
					check = 1;
					break;
				}
				else
					sinh(i);
			}
			if(check == 1)
				break;
		}
		if(check == 0)
			cout << -1 << endl;
	}
	return 0;
}

