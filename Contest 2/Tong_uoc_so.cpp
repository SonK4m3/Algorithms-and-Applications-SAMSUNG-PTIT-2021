#include<iostream>
using namespace std;

int tong(long long n){
	long long res = 1;
	long long tmp = n;
	long long tmp_res = 1;
	long long tmp_i = 2;
	while(n % 2 == 0){
		tmp_res += tmp_i;
		tmp_i = tmp_i * 2;
		n /= 2; 
	}
	res *= tmp_res;
	for(int i = 3; i * i <= n; i += 2){
		tmp_res = 1;
		tmp_i = i;
 		while(n % i == 0){
			tmp_res += tmp_i;
			tmp_i *= i;
			n /= i;	
		}
		res *= tmp_res;
	}
	tmp_res = 1;
	tmp_i = n;
	if(n > 2){
		tmp_res += tmp_i;
		tmp_i *= n;
	}
	res *= tmp_res;
	return res - tmp > tmp;
}

int main(){
	long long a, b;
	cin >> a >> b;
	long long dem = 0;
	for(long long i = a; i <= b; i += 1){
		if(tong(i) == 1)
			dem ++;
//		cout <<i<<" : " << tong(i) << endl;
	}
	cout << dem;
}
