#include<bits/stdc++.h>
using namespace std;

int check(long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long max = 0;
		for(int i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				if(check(i) == 1)
					if(max < i)
						max = i;
				if(check(n / i) == 1){
					if(max < n / i)
						max = n / i;
				}
			}
		}
		cout << max << endl;
	}
}
