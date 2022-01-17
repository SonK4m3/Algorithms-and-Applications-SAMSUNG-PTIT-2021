#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll arr[], int n, int k, ll min){
    int cnt = 1;
    ll sum = 0;
 
    for (int i = 0; i < n; i++){
        if (arr[i] > min)
            return false;
            
        if (sum + arr[i] > min){
            cnt ++;
            sum = arr[i];

            if (cnt > k)
                return false;
        }
 
        else
            sum += arr[i];
    }
    return true;
}
 
ll Min(ll arr[], int n, int k){
    ll sum = 0;
    
    if (n < k)
        return -1;
 
    for (int i = 0; i < n; i++)
        sum += arr[i];
        
    ll l = 0, r = sum;
    ll res = INT_MAX;
 
    while (l <= r){
        ll mid = (l + r) / 2;
        if (check(arr, n, k, mid)){
            res = mid;
            r = mid - 1;
        }
 
        else
            l = mid + 1;
    }
    return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;		
		ll arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		cout << Min(arr, n, k) << endl;
	}
}
