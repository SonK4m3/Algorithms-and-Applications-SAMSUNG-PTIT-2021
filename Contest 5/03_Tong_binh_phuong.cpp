#include<bits/stdc++.h>
using namespace std;
#define ll long long

int minNumbers(int x, vector<int> arr, int n){
    queue<int> q;
    q.push(x);
    set<int> v;
 
    int d = 0;
 
    while (q.size()) {
        int s = q.size();
        while (s--) {
            int c = q.front();
            if (!c)
                return d;
            q.pop();
            if (v.find(c) != v.end() or c < 0)
                continue;
            v.insert(c);
            for (int i = 0; i < n; i++)
                q.push(c - arr[i]);
        }
 
        d++;
    }
 
    return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 1; i * i <= n; i++)
			v.push_back(i * i);
		cout << minNumbers(n, v, v.size()) << endl;
	}
}
