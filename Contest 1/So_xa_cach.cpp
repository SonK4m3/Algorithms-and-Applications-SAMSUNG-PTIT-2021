#include<iostream>
using namespace std;

int n, c[16], l[16];

void in(){
	for(int i = 1; i <= n; i++)
		cout << c[i];
	for(int i = 1; i <= n; i++)
		cout << l[i];
	cout << endl;
}

void Try2(int i){
	for(int j = l[i - 1]; j <= n; j+=2){
		l[i] = j;
		if(i == n){
			in();
		}
		else Try2(i + 1);
	}
}

void Try(int i){
	for(int j = c[i - 1]; j <= n; j+=2){
		c[i] = j;
		if(i == n){
			Try2(1);
		}
		else	Try(i + 1);
	}
}

int main(){
	cin >> n;
	for(int i = 0; i <= n; i +=2){
		c[i] = i;
		l[i] = i + 1;
	}
	Try(1);
}
