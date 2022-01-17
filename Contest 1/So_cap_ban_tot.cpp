#include<iostream>
using namespace std;

void check(int l, int r, int k, int &dem){
	if(l == r){
		dem ++;
	}
	int m = (l + r) / 2;
	if(m - l > k)
		return check(l, m, k, dem);
	if(r - m > k)
		return check(k, r, k, dem);
}

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		arr[i] = s.length();
	}
	int dem = 0;
	
	cout << dem << endl;
}
