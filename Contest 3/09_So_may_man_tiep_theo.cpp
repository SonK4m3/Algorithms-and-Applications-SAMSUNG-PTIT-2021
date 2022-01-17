#include<bits/stdc++.h>
using namespace std;

string Str(long a){
	string s = "";
	while(a > 0){
		s = char(a%10 + '0') + s;
		a /= 10;
	}
	return s;
}

long lucky_number(string a){
	long k = 0;
	vector<int> v;
	int i = 0, n = a.size();
	while(i < n){
		if(a[i] - '0' == 4){
	 		v.push_back(4);
			i++;
			continue;
		}
		if(a[i] - '0' == 7){
			v.push_back(7);
			i++;
			continue;
		}
		if(a[i] - '0' < 4){
			v.push_back(4);
			i++;
			break;
		}
		if(a[i] - '0' < 7){
			v.push_back(7);
			i++;
			break;
		}
		if(a[i] - '0' > 7){
			if(v.size() > 1){
				v.pop_back();
				v.push_back(7);
			}
			else{
				v.push_back(4);
			}
			break;
		}		
	}
	while(i < n){
		v.push_back(4);
		i++;
	}
	for(int i= 0; i < v.size(); i++)
		k = k * 10 + v[i];
	return k;
}

int main(){
	long a, b;
	cin >> a >> b;
	long long sum = 0;
	for(long i = a; i <= b;i ++)
		sum += lucky_number(Str(i));
	cout << sum;
}
