#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	stack<int> v;
	for(int i = 0; i < n; i++){
		if(v.empty()){
			v.push(0);
		}
		else{
			if(v.top() == 0)
				v.push(1);
			else
				v.push(0);
		}
		cout << v.top() <<" ";
	}
	cout << endl;
	if(v.top() == 0)
		v.push(1);
	for(int i = 0; i < n; i++){
		cout << v.top() <<" ";
		v.pop();
	}
}
