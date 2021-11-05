/*______________________________
	Name: Decoding the string
	Copyright: (C) 2021
	Author: SonK4m3
	Description: 
	
__________________________________*/
#include<iostream>
#include<stack>
using namespace std;

// solutions function
// we decode string in each [ ]
string Decode(string str){
    stack<int> IntSt;
    stack<char> StrSt;
    string tmp = "", result = "";
 
    for (int i = 0; i < str.length(); i++){
    	// get times of repeat
        int count = 0;
        if (str[i] >= '0' && str[i] <='9'){
            while (str[i] >= '0' && str[i] <= '9'){
                count = count * 10 + str[i] - '0';
                i++;
            }
 
            i--;
            IntSt.push(count);
        }
        else if (str[i] == ']'){
            tmp = "";
            count = 0;
 
            if (! IntSt.empty()){
                count = IntSt.top();
                IntSt.pop();
            }
 
            while (! StrSt.empty() && StrSt.top()!='[' ){
                tmp = StrSt.top() + tmp;
                StrSt.pop();
            }
 
            if (! StrSt.empty() && StrSt.top() == '[')
                StrSt.pop();
                
            for (int j = 0; j < count; j++)
                result = result + tmp;
 
            for (int j = 0; j < result.length(); j++)
                StrSt.push(result[j]);
 
            result = "";
        }
 
        else if (str[i] == '['){
            if (str[i-1] >= '0' && str[i-1] <= '9')
                StrSt.push(str[i]);
 
            else{
                StrSt.push(str[i]);
                IntSt.push(1);
            }
        }
        else
            StrSt.push(str[i]);
    }
 
    while (! StrSt.empty()){
        result = StrSt.top() + result;
        StrSt.pop();
    }
 
    return result;
}

void Test(){
	string s = "3[b2[ca]]";
	
	cout << Decode(s);
	//output: bcacabcacabcaca
}

int main(){
	int t;
	cin >> t;	// input test case
	while(t--){
		string str;
		cin >> str;
		
		//print decoded string
		cout << Decode(str) << endl;
		
//		Test(); // test function
	}
}
