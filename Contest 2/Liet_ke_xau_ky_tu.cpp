#include<iostream>
using namespace std;

char s;
int k;
int n;
string str = "!ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int c[30];
char ss[30];

void in(){
	for(int i = 1; i <= k; i++)
		cout << str[c[i]];
	cout << endl;
}

void Try(int i){
	for(int j = c[i - 1]; j <= n; j++){
		c[i] = j;
		if(i == k)	in();
		else Try(i + 1);
	}
}

int main(){
	cin >> s >> k;
	n = s - 'A' + 1;
	for(int i = 1; i <= k; i++){
		c[i] = i;
	}
	c[0] = 1;
	Try(1);
}
