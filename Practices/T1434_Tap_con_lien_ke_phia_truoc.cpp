#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[1005] = {0};
		for(int i = 1; i <= k; i++)
			cin >> a[i];
		
		int vt = k;
		while(a[vt] == a[vt - 1] + 1) vt --;
		if(vt == 0){
			for(int i = k; i >= 1; i--)
				cout << n - i + 1 << " ";
		} else {
			a[vt] --;
			for(int i = vt + 1; i <= k; i++)
				a[i] = n - k + i;
			for(int i = 1; i <=k; i++)
				cout << a[i] << " ";
		}
		cout << endl;
	}
}
