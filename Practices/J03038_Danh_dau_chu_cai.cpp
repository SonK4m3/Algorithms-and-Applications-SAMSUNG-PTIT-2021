#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int arr[26] = {0};
	for(int i = 0; i < s.size(); i++)
		arr[s[i] - 'a'] = 1;
	int cnt = 0;
	for(int i = 0; i< 26; i++)
		if(arr[i] == 1)
			cnt ++;
	cout << cnt;
}
