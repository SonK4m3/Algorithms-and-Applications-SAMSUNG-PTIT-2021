#include <iostream>
using namespace std;
  
long long cal[31];  
  
void catalan(){
    cal[0] = 1;
    cal[1] = 1;
    for(int i = 2; i <= 30; i++){
    	long long tmp = 0;
    	for(int j = 0; j < i; j++){
			tmp += cal[j] * cal[i - j - 1];
    	}
    	cal[i] = tmp;
	}
}
  
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	catalan();
    int t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
        cout << cal[n] << endl;
    }
    return 0;
}
