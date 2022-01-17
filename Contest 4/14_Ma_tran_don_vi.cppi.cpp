#include <bits/stdc++.h>
using namespace std;

void findMaxMatrixSize(vector<vector<int> > arr, int K){
    int i, j;
 
    int n = arr.size();
    int m = arr[0].size();
 
    // To store the prefix sum of matrix
    int sum[n + 1][m + 1];
 
    // Create Prefix Sum
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
 			if (i == 0 || j == 0) {
                sum[i][j] = 0;
                continue;
            }
            sum[i][j] = arr[i - 1][j - 1] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
 	int res = 0;
    int ans = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
 
            if (i + ans - 1 > n || j + ans - 1 > m)
                break;
 
            int mid, lo = ans;
            int hi = min(n - i + 1, m - j + 1);

            while (lo < hi) {

                mid = (hi + lo + 1) / 2;
 
                if (sum[i + mid - 1][j + mid - 1] + sum[i - 1][j - 1] - sum[i + mid - 1][j - 1] - sum[i - 1][j + mid - 1] < K) {
                    lo = mid;
                }
 
                else if(sum[i + mid - 1][j + mid - 1] + sum[i - 1][j - 1] - sum[i + mid - 1][j - 1] - sum[i - 1][j + mid - 1] > K){
                    hi = mid - 1;
                }
                else{
                	
//                	cout << lo <<" "<<mid << " " << hi<<endl;
                	res += 1;
//                	break;
					lo = mid;
				}
            }
 
            ans = max(ans, lo);
        }
    }
 
    cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int> > mtrx;
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			vector<int> v;
			for(int j = 0; j < m; j++){
				v.push_back(s[j] - '0');
			}
			mtrx.push_back(v);
		}
		
		findMaxMatrixSize(mtrx, k);
	}
	return 0;
}

