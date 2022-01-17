#include <bits/stdc++.h>
using namespace std;
int n, k;
int c[101];
int arr[101];
long Max;
void update(){
	long sum = 0;
	for(int i = 1; i <= 3; i++)
		sum += arr[c[i]];
	if(sum > Max && sum <= k)
		Max = sum;
}

void Try(int i){
	for(int j = c[i - 1] + 1; j <= n - 3 + i; j++){
		c[i] = j;
		if(i == 3)	update();
		else	Try(i + 1);
	}	
}

int main() {
	int t;
	cin >> t;
	while(t--){
		Max = INT_MIN;
	    cin >> n >> k;
	    for(int i = 1; i <= n; i++){
	    	cin >> arr[i];
	    	c[i] = 0;
	    }
	    Try(1);
	    cout << Max << endl;
	}
}
