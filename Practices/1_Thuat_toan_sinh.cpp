#include<bits/stdc++.h>
using namespace std;

bool OK = false;
int B[30] = {0}, n;

void in(){
	for(int i = 1; i <= n; i++)
		cout << B[i] << " ";
	cout << endl;
}

void sinhkt(){
	int i = n;
	while(B[i]){
		B[i] = 0;
		i--;
	}
	if(i == 0) OK = true;
	else B[i] = 1;
}

int main(){
	cin >> n;
	while(!OK){
		in();
		sinhkt();	
	}
}
