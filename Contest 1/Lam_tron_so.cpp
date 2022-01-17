#include<iostream>
#include<vector>
using namespace std;

long long LamTron(long long s){
	vector<int> v;
		while(s > 0){
			v.push_back(s % 10);
			s /= 10;
		}
		long long k = 0;
		int n = v.size();
		int nho = 0;
		for(int i = 0; i < n; i++){
			if(nho == 1){
				v[i] = v[i] + 1;
				nho = 0;
			}
			if(v[i] >= 5)
				nho = 1;
		} 
		k = v[n - 1];
		for(int i = 1; i < n; i++)
			k = k * 10;
		return k;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long s;
		cin >> s;
		if(s <= 10)
			cout << s << endl;
		else{
			cout << LamTron(s) << endl;
		}
		
		
	}
}
