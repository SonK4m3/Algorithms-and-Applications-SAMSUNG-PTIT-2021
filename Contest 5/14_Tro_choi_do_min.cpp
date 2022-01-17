#include<iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	int dp[n];
	for(int i = 0; i < n; i++)
		if(s[i] == '*'){
			if(i > 0)
				dp[i - 1] += 1;
			if(i < n - 1)
				dp[i + 1] += 1;
		}
	cout << s << endl;
	for(int i = 0; i < n; i++)
		cout << dp[i];
}
