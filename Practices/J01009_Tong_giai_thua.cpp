#include<bits/stdc++.h>
using namespace std;


int main(){
		long a;
		cin >> a;
		long s = 0;
		long t = 1;
		for(long i = 1; i <= a; i ++){
			t *= i;
			s += t;
		}
		cout<< s << endl;
	
	return 0;
}
