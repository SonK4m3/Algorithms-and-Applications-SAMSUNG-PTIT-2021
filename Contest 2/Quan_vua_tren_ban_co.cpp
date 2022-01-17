#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x1, x2, y1, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	int dem = 0;
	dem = max(abs(x1 - y1), abs(x2- y2));
	cout << dem;
	return 0;
}
