/*_____________________________________
	Name: Change prefixes to suffixes
	Copyright: (C) 2021
	Author: SonK4m3
	Description: 
	we chage *+AB-CD to AB+CD-*
_____________________________________*/
#include<iostream>
#include<stack>
using namespace std;

void Solution(string str){
	stack<string> s;
	
	// when str[i] is sign, take 2 element in top stack to calculate	
	for(int i = str.size() - 1; i >= 0; i--){
		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
			string A = s.top(); s.pop();
			string B = s.top(); s.pop();
			string tmp = A + B + str[i];
			s.push(tmp); 
		}
		else
			s.push(string(1, str[i]));
	}
	cout << s.top() << endl;	
}

int main(){
	int t;	// input test case
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		Solution(str); // solution function
	}
}
