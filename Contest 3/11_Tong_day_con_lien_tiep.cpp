#include<bits/stdc++.h>
using namespace std;
 
vector <long> v;
void U(long a){
	if (sqrt(a)*sqrt(a) == a) 
		v.push_back(sqrt(a));
	for (int i=1; i<sqrt (a); i++){
		if (a%i == 0){
			v.push_back(i);
			v.push_back(a/i);
		}
	}
}
 
int main (){
	int t;
	cin >> t;
	while(t--){
 		int n;
		cin>>n;
		long arr[10004];
		long S=0;
		long tg;
		arr[0]=0;
		for (int i=1; i<=n; i++){
			cin>>tg;
			S+=tg;
			arr[i]=S;
		}
		long SMax=arr[n];
		U(SMax);
		sort (v.begin(), v.end());
		int kt=0;
		long buocM;
		for (int i=0; i<v.size(); i++){
			long tong=v[i];
			long buoc=SMax/tong;
			int kt2=1;
			int vtd=0;
			int dem=0;
			while (1){
				int kt2=0;
				for (int j=vtd+1; j<=n; j++){
					if ((arr[j]-arr[vtd])==tong){
						kt2=1;
						vtd=j;
						dem++;
						break;
					}
				}
				if (kt2==0) break;
			}
			if (dem==buoc){
				buocM=buoc;
				kt=1;
				break;
			}
		}
		cout<<SMax/buocM<<endl;
		v.clear();
	}
	return 0;
}

