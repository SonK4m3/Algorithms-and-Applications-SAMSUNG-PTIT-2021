#include <bits/stdc++.h>
using namespace std;

void solve(string S){
    int current_max = 0;
    int max = 0;
    int n = S.length();
 
    for (int i = 0; i < n; i++){
        if (S[i] == '('){
            current_max++;

            if (current_max > max)
                max = current_max;
        }
        else if (S[i] == ')'){
            if (current_max > 0)
                current_max--;
            else{
            	cout << - 1 << endl;
            	return;
			}
        }
    }
    if (current_max != 0)
        cout << -1 << endl;
 	else
    	cout << max << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
    	char k;	cin >> k;
        string s; getline(cin, s);
        s = k + s;
        solve(s);
    }
    return 0;
}

