#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		int dem = 0;
		for(int i = 1; i * i <= n; i++){
			if(n % i == 0){
				if(i * i == n){
					if(i % 2 == 0)
						dem += 1;
				}
				else{
					if(i % 2 == 0)
						dem += 1;
					if((n / i) % 2 == 0)
						dem += 1;
				}
			}
		}
		cout << dem << endl;
	}
}
