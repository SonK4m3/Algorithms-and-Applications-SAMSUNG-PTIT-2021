#include<bits/stdc++.h>
using namespace std;

int n, p , s, vt;
bool Ok[300];
vector<int> a;
vector< vector<int> > res;

void init(){
	cin >> n >> p >> s;
	vt = lower_bound(a.begin(), a.end(), p) - a.begin();
	for(int i = 0; i < 300; i ++)
		Ok[i] = false;
	res.clear();	
}

void sang(){
	for(int i = 2; i <= 200; i++){
		if(!Ok[i]){
			a.push_back(i);
			for(int j = i * i; j <= 200; j+= i)
				Ok[j] = true;
		}
	}	
}

void Try(int i, int sum, vector<int> v){
	if(sum > s)
		return;
	if(sum == s && v.size() == n){
		res.push_back(v);
		return;
	}
	for(int j = i ; j < a.size(); j++){
		if(Ok[j] == false && sum + a[j] <= s && v.size() < n){
			v.push_back(a[j]);
			Ok[j] = true;
			Try(j + 1, sum + a[j], v);
			v.pop_back();
			Ok[j] = false;
		}
		
	}
}

int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		init();
		vector<int> v;	v.clear();
		Try(vt, 0, v);
		cout << res.size() << endl;
		for(int i = 0; i < res.size(); i++){
			for(int j = 0; j < res[i].size(); j++)
				cout << res[i][j] <<" ";
			cout << endl;
		}
	}
	return 0;
}

