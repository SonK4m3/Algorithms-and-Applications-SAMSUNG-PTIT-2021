#include<iostream>
using namespace std;

bool OK = false;
int X[30], n;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void in(){
	for(int i = 1; i <= n; i++)
		cout << X[i] << " ";
	cout << endl;
}

void sinhkt(){
	int j = n - 1;
	while(j > 0 && X[j] > X[j + 1])
		j--;
	if(j > 0){
		int k = n;
		while(X[k] < X[j])
			k--;
		swap(X[j], X[k]);
		int r = j + 1, s = n;
		while(r <= s){
			swap(X[r], X[s]);
			r++; s--;
		}
	}
	else	OK = true;
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		X[i] = i;
	while(!OK){
		in();
		sinhkt();
	}
	return 0;
}
