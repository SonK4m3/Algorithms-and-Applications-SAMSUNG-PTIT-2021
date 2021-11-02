/*______________________________________________
	Name: Calculating prefixes expression value
	Copyright: (C) 2021
	Author: SonK4m3
	Description: 
	input:		output:
	+8/632 		8
_______________________________________________*/
#include<iostream>
#include<stack>
using namespace std;

void Solution(string str){
	stack<int> s;
	
	// when str[i] is sign, take 2 element in top stack to calculate
	for(int i = str.size() - 1; i >= 0; i --){
		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
			int a = s.top(); s.pop();
			int b = s.top(); s.pop();
			int tmp = 0;
			// calculate
			if(str[i] == '+')
				tmp = a + b;
			else if(str[i] == '-')
				tmp = a - b;
			else if(str[i] == '*')
				tmp = a * b;
			else
				tmp = a / b;
				
			s.push(tmp); 
		}
		else
			s.push(str[i] - '0');	
		}
		
	cout << s.top() << endl;	
}

int main(){
	int t;	// input test case
	cin >>t;
	while(t--){
		string str;
		cin >> str;
		Solution(str); // solution function
	}
} 
