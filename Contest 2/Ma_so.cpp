#include<iostream>
using namespace std;

int n;
string ch = "#ABCDE";
char s[6];
int c[6];
bool ok[6] = {false}, oks[6] = {false};
void in(){
	for(int i = 1; i <= n; i++)
		cout << s[i];
	for(int i = 1; i <= n; i++)
		cout << c[i];
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		c[i] = j;
		if(i == n)	in();
		else	Try(i + 1);
	}
}

void Trys(int i){
	for(int j = 1; j <= n; j ++){
		if(oks[j] == false){
			s[i] = ch[j];
			oks[j] = true;
			if(i == n)	Try(1);
			else	Trys(i + 1);
			oks[j] = false;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		c[i] = i;
	Trys(1);
}
