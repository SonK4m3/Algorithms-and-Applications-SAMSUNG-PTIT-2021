#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n - 1];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n - 1; i++)
			cin >> b[i];
		int i = 0;
		int check = 0;
		while(i < n - 1){
			if(a[i] != b[i]){
				cout << i + 1<< endl;
				check = 1;
				break;
			}
			i ++;
		}
		if(check == 0)
			cout << n << endl;
	}
	return 0;
}
