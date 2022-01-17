#include<bits/stdc++.h>
using namespace std;

int n;
int a[10];
bool ok[10];

void In(){
	for(int i = 1; i <= n; i++)
		cout << a[i];
	cout << endl;
}

void Sinh(int i){
	for(int j = a[i - 1]; j <= n; j ++){
		if(abs(j - a[i - 1]) > 1){
			a[i] = j;
			if(i == n) In();
			else
				Sinh(i + 1);
		}
	}
}

int main(){
	cin >> n;
	Sinh(1);	
}
