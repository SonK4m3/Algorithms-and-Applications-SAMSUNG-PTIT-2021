#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{	int t;
	cin >> t;
	while(t--){
	    int n;
		ll k;
	    cin >> n >> k;
	    map<ll, int> fre;
	    vector<ll> arr(n);
	    for (int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	        fre[arr[i]]++;
	    }
	    ll answer = 0;
	    for (int i = 0; i < n; i++)
	    {
	        if (arr[i] == k - arr[i])
	        {
	            answer += (fre[arr[i]] - 1);
	        }
	        else
	        {
	            answer += (fre[k - arr[i]]);
	        }
	    }
	    answer /= 2;
	    cout <<answer << endl;
	}
    return 0;
}

