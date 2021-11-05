/*___________________________
	Name: Reverse characters
	Copyright: (C) 2021
	Author: SonK4m3
	Description: 
____________________________*/
#include<iostream>
#include<stack>
using namespace std;

void Reverse(string str){
	stack<char> st;
	
	// push char to stack and pop to reverse
	for(int i = 0; i < str.size(); i++){
		if(str[i] == ' ' || str[i] == '\0'){
			while(!st.empty()){
				cout << st.top();
				st.pop();
			}
			cout <<" ";
		}
		else	st.push(str[i]);
	}
	cout << endl;	
}

void Test(){
	string s = "ABC DEF";
	
	Reverse(s);
	//output: CBA FED
}

int main(){
	int t;	
	cin >> t; // input test case
	while(t--){
		// get string from multi test
		char k;	cin >> k;
		string s;
		getline(cin, s);
		s = k + s + '\0';
		
		Reverse(s); // solutions and print function
		
//		Test(); // test function 
	}
}
