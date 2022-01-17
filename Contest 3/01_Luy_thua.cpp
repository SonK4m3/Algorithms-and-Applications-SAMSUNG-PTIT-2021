#include<bits/stdc++.h>
using namespace std;
#define e 1000000007

int a;
long long b;
long long Power(int a, long long b){
if(b==0) return 1;
if(b==1) return a;
else{
long long p = Power(a,b/2);
p = p%e;
if(b%2==0){
return (p*p)%e;
}
else{
return (((p*p)%e)*a)%e;
}
}
}
int main(){
while(1){
cin >> a >> b;
if(a==0 && b==0) break;
long long kq = Power(a,b);
cout << kq << endl;
}
}
