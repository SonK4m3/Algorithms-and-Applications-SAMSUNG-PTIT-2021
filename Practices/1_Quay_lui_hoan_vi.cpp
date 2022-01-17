#include<iostream>
using namespace std;

int arr[30], n;
bool Ok[30] = {0};

void in(){
	for(int i = 1; i <= n; i++)
		cout << arr[i] <<" ";
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(Ok[j] == false){
			arr[i] = j;
			Ok[j] = true;
			if(i == n)	in();
				else Try(i + 1);
			Ok[j] = false;
		}
	}
}

int main(){
	cin >> n;
	Try(1);
}
