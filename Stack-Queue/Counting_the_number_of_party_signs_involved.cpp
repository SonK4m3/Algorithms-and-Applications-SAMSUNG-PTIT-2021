/**____________________________________________________
	Name: Counting the number of party signs involved
	Copyright: (C) 2021
	Author: 	SonK4m3
	Description: 
	
______________________________________________________**/
#include<iostream>
#include<stack>
using namespace std;

/*	
Put the brackets in the wrong place on to the stack
*/

void Solution(string str){
	stack<char> s;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '(' || str[i] == ')' && s.size() == 0)	
			s.push(str[i]);
		else if(str[i] == ')'){
			if(s.size() > 0 && s.top() == '(') s.pop();
			else	s.push(str[i]);
		}
	}
		
	int l = 0, r = 0;
	while(!s.empty()){
		if(s.top() == '(')
			l ++;
		else
			r ++;
		s.pop();
	}
	// flip the brackets in the same direction
	cout << l / 2 + r / 2 + l % 2 + r % 2 << endl;	
}

// main function
int main(){
	int t;  // input test case
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		Solution(str); // solution function
	}
	return 0;
}
