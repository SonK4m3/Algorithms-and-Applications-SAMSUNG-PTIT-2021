#include<bits/stdc++.h>
using namespace std;
int cnt(string s, int n){
    if (n == 0 || n == 1)
        return 1;
    if (s[0] == '0')
        return 0;
 
    int count = 0;

    if (s[n - 1] > '0')
        count = cnt(s, n - 1);
    if (s[n - 2] == '1'
        || (s[n - 2] == '2'
        && s[n - 1] < '7'))
        count += cnt(s, n - 2);
 
    return count;
}
 
int process(string s, int n)
{
    if (n == 0 || (n == 1 && s[0] == '0'))
        return 0;
    return cnt(s, n);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << process(s, s.size()) << endl;
	}
}
