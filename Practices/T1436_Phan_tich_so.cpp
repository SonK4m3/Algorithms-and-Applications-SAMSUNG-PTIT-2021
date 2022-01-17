#include<iostream>
using namespace std;
#define MAX 100
#define TRUE 1
#define FALSE 0

int n, C[MAX], k, count, Stop;

void Khoitao(void){
 	cin >> n;
 	k = 1; count = 0; C[k] = n;
}

void Result(void){
	int i; count++;
	cout << "(";
	for (i = 1; i < k; i++)
		cout << C[i] <<" ";
	cout << C[k] <<")" << " ";	
}

void Next_Division(void){
 	int i, j, R, S, D;
 	i = k;
 	while (i>0 && C[i] == 1)
  		i--;
	if (i>0){
		C[i] = C[i] - 1;
		D = k - i + 1;
		R = D / C[i];
		S = D % C[i];
		k = i;
		if (R>0){
  			for (j = i + 1; j <= i + R; j++)
    			C[j] = C[i];
   		k = k + R;
	}
  	if (S>0){
   		k = k + 1; C[k] = S;
		}
	}
 	else Stop = TRUE;
}

void Recurse(){
	Stop = FALSE;
 	while (!Stop){
  		Result();
  		Next_Division();
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
	 	Khoitao();
		Recurse();
		cout << endl;
	}
}
