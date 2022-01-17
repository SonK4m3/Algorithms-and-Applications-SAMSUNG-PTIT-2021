#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int c, m;
		cin >> c >> m;
		(c % (m + 1) == 0) ? cout << "Second" : cout << "First";
		cout << endl;
	}
}
