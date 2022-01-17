#include<iostream>
using namespace std;
#define ll long long

void multiply(ll T[3][3], ll M[3][3]){
	ll a, b, c, d, e, f, g, h, i;
	a = T[0][0] * M[0][0] +
		T[0][1] * M[1][0] +
		T[0][2] * M[2][0];
	b = T[0][0] * M[0][1] +
		T[0][1] * M[1][1]  +
		T[0][2] * M[2][1] ;
	c = T[0][0] * M[0][2]  +
		T[0][1] * M[1][2]  +
		T[0][2] * M[2][2] ;
	d = T[1][0] * M[0][0]  +
		T[1][1] * M[1][0]  +
		T[1][2] * M[2][0] ;
	e = T[1][0] * M[0][1]  +
		T[1][1] * M[1][1]  +
		T[1][2] * M[2][1] ;
	f = T[1][0] * M[0][2]  +
		T[1][1] * M[1][2] +
		T[1][2] * M[2][2] ;
	g = T[2][0] * M[0][0] +
		T[2][1] * M[1][0] +
		T[2][2] * M[2][0] ;
	h = T[2][0] * M[0][1] +
		T[2][1] * M[1][1] +
		T[2][2] * M[2][1];
	i = T[2][0] * M[0][2]+
		T[2][1] * M[1][2]+
		T[2][2] * M[2][2];
	
	T[0][0] = a; T[0][1] = b; T[0][2] = c;
	T[1][0] = d; T[1][1] = e; T[1][2] = f;
	T[2][0] = g; T[2][1] = h; T[2][2] = i;
}

void Power(ll T[3][3], ll n){
	if(n == 0 || n == 1)
		return;
	ll M[3][3] = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};
	
	Power(T, n / 2);
	multiply(T, T);
	if(n % 2 == 1)
		multiply(T, M);
}

int Tribonacci(ll n){
	ll T[3][3] = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};
	if(n == 0 || n == 1)
		return 0;
	else 
		Power(T, n - 2);
	return T[0][0];
}

int main(){
	int t;
	cin >> t;
	while(t--){	
		ll n;
		cin >> n;
		cout << Tribonacci(n) << endl;
	}
}
