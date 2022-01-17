#include<iostream>
using namespace std;

void swap(string &s, int n, int m){
	for(int i = 0; i < n; i++){
		if(s[i] - '0' == n)
			s[i] = m + '0';
	}
}

long number(string s){
	long k = 0;
	for(int i = 0; i < s.size(); i++){
		k = k * 10 + s[i] - '0';
	}
	return k;
}

long min(string s1, string s2){
	swap(s1, 6, 5);
	swap(s2, 6, 5);
	return number(s1) + number(s2);
}

long max(string s1, string s2){
	swap(s1, 5, 6);
	swap(s2, 5, 6);
	return number(s1) + number(s2);
}

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	cout << min(s1, s2) <<" "<< max(s1, s2);
}
