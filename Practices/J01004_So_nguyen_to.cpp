#include<iostream>
using namespace std;

int check(long n){
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		check(n) == 1 ? cout << "YES" : cout << "NO";
		cout << endl;
	}
}
