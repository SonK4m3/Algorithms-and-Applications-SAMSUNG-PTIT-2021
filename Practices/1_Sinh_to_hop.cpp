#include<bits/stdc++.h>
using namespace std;

bool OK = false;
int C[30], n, k;

void in(){
	for(int i = 1; i <= k; i++)
		cout << C[i] << " ";
	cout << endl;
}

void sinhkt(){
	int i = k;
	while(C[i] == n - k + i)
		i--;
	if(i > 0){
		C[i] ++;
		for(int j = i + 1; j <= k; j++)
			C[j] = C[j - 1] + 1;
	}
	else	OK = true;
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++)
		C[i] = i;
	while(!OK){
		in();
		sinhkt();	
	}
	return 0;
}
