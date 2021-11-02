/*________________________________________________
	Name: Check math expressions
	Copyright: (C) 2021
	Author: SonK4m3
	Description: 
	
	The arithmetic expression has 
	redundancy of the symbol pairs '(',')' or not ?
	
__________________________________________________*/
#include<iostream>
#include<stack>
using namespace std;

int CheckMathExpression(string str){
	stack<char> s;
	
	// we check between ( and ) has 1 sign or not
	for(int i = 0; i < str.size(); i++){
		if(str[i] == ')'){
			int check = 0;

			while(s.top() != '('){
				if(s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/'){
					check = 1;
				}
				s.pop();
			}
			s.pop();
			
			if(check == 0)
				return 1;	
		}
		else
			s.push(str[i]);
	}
	return 0;
}


int main(){
	int t;	
	cin >> t;	// input test case
	cin.ignore();
	while(t--){
		string str;
		getline(cin, str);	// input string
		
		// Solution function
		CheckMathExpression(str) == 1 ? cout << "Yes" : cout << "No";
		
		cout << endl;
	}
}
