#include<iostream>
#include<cmath>
#define ll long long int
using namespace std;

int tongcs(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		int sum1= 0, sum2 = tongcs(n);
		int dem = 0;
		while(n % 2 == 0){
			n /= 2;
			dem += 1;
			sum1 += 2;
		}
		for(int i = 3; i <= sqrt(n); i += 2){
			while(n % i == 0){
				n /= i;
				if(i < 10)
					sum1 += i;
				else
					sum1 += tongcs(i);
				dem += 1;
			}
		}
		if(n > 2) {
			dem += 1;
			if(n < 10)	sum1 += n;
			else
				sum1 += tongcs(n);
		}
		if(dem < 2)	cout << "NO" << endl;
			else{
				sum1 == sum2 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
			} 
	}
}
