#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll result = INT_MAX;
int dem = 0;

void find(ll A[], ll B[],int m, int n){
    ll a = 0, b = 0;
    while (a < m && b < n)
    {
        if (abs(A[a] - B[b]) < result){
            result = abs(A[a] - B[b]);
        	dem = 1;
		}
 		else if(abs(A[a] - B[b]) == result){
 			dem ++;
		}
        if (A[a] < B[b])
            a++;
 
        else
            b++;
    }
}

int main(){
    int n,m;
	ll c1,c2;
    cin >> n >> m;
    cin >> c1 >> c2;
    ll y = abs(c1 - c2);
    ll a[n],b[m];
    for (int i = 0; i < n; i++) 
    	cin >> a[i];
    sort(a, a + n);
    for (int j = 0; j < m; j++)
    	cin >> b[j];
	sort(b, b + m);
	find(a, b, n, m);
	cout << result + y<<" "<<dem;
}
