#include<iostream>
using namespace std;

int tien[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem = 0;
		int i = 9;
		while(n > 0){
			if(n >= tien[i]){
				dem += 1;
				n -= tien[i];
			}
			else{
				i --;
			}
		}
		cout << dem << endl;
	}
}
