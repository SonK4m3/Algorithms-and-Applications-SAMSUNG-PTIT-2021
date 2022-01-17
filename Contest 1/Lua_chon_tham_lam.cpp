#include<bits/stdc++.h>
using namespace std;

int so_sanh(string s1, string s2){
	for(int i = 0; i < s1.size(); i++){
		if(s1[i] > s2[i])
			return -1;
		else if(s2[i] > s1[i])
			return 1; 
	}
	return 0;
}

string Min(int n, int s){
	if(s == 0){
		return (n == 1) ? "0" : "-1";
	}
	if(9 * n < s)
		return "-1";
	string res = "";
	
	s -= 1;
	for(int i= n - 1; i > 0; i--){
		if(s > 9){
			res = "9" + res;
			s -= 9;
		}
		else{
			res = char(s + '0') + res;
			s = 0;
		}
	}
	res = char(s + 1 + '0' ) + res;
	return res;
}

string Max(int n, int s){
	if(s == 0){
		return (n == 1) ? "0" : "-1";
	}
	if(9 * n < s)
		return "-1";
	string res = "";
	if(s <= 9){
		res = res + char(s + '0');
		s = 0;
	}
	else{
		res += "9";
		s -= 9;
	}
	for(int i= n - 1; i > 0; i--){
		if(s >= 9){
			res = res + "9";
			s -= 9;
		}
		else{
			res = res + char(s + '0');
			s = 0;
		}
	}

	return res;
}

int main(){
	int s, n;
	cin >> n >> s;
	cout << Min(n, s) <<" "<<Max(n, s) << endl;
}
