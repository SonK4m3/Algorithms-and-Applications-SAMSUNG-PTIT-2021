#include<bits/stdc++.h>
using namespace std;

const long limit = 2e5 + 5;

long long t, x, y;
int d[limit] = {0};
vector<long long> a;

bool ok[limit];
int dem[limit];
vector <long long> ke[limit];
queue<long long> q;

void sang(){
	for(int i = 2; i <= 9999; i++){
		if(d[i] == 0)
			for(int j = i * i; j <= 9999; j+= i)
				d[j] = 1;
	}
	
	for(int i = 1000; i <= 9999; i++)
		if(d[i] == 0)
			a.push_back(i);
}

bool check(long long x, long long y){
	int d = 0;
	while(x && y){
		if(x % 10 != y % 10) d++;
		x /= 10; y /= 10;
	}
	return d == 1;
}

void khoitao(){
	for(int i = 0; i < a.size(); i++){
		for(int j = i + 1; j < a.size(); j++){
			if(check(a[i], a[j])){
				ke[a[i]].push_back(a[j]);
				ke[a[j]].push_back(a[i]);
			}
		}
	}
}

int BFS(long long u, long long dich){
	q.push(u);
	dem[u] = 0;
	while(q.size()){
		u = q.front(); q.pop();
		ok[u] = true;
		if(u == dich) return dem[u];
		for(int i = 0; i < ke[u].size(); i++){
			long long v= ke[u][i];
			if(ok[v]) continue;
			ok[v] = true;
			dem[v] = dem[u] + 1;
			q.push(v);
		}
	}
}

int main(){
	sang();
	khoitao();
	
	cin >> t;
	while(t--){
		for(int i = 0; i < limit; i++){
			ok[i] = false;
			dem[i] = 0;
		}
		
		while(q.size()) q.pop();
		cin >> x >> y;
		cout << BFS(x, y);
		cout << endl;
	}
	return 0;
}
