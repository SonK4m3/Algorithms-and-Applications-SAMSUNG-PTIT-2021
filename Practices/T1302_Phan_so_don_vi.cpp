#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		vector<ll> v;
		while(b % a != 0){
			ll x = b / a + 1;
			v.push_back(x);
			a = a * x - b;
			b = b * x;
		}
		v.push_back(b/a);
		for(int i = 0; i < v.size(); i++){
			cout << "1/"<< v[i];
			if(i != v.size() - 1)
				cout << " + ";
		}
		cout << endl;
	}
}

