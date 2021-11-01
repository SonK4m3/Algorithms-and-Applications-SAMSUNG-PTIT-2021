#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}

int main(){
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
    	int x; cin >> x;
    	mp[x] ++;
	}
	map<int, int> :: iterator it;
	vector<pair<int, int> > v;
	for(it = mp.begin(); it != mp.end(); it ++){
		v.push_back({it->first, it->second}); 
	}
	sort(v.begin(), v.end(), cmp);
	int Max = 0;
	for(int i= 1; i < v.size(); i++){
		if(v[i].second < v[Max].second){
			cout << v[i].first;
			return 0;
		}
	}
	cout << "NONE";
	return 0;
}

