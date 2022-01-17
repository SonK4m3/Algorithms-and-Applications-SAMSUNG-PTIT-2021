#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int

int main(){
	int n, m;
	cin >> n >> m;
	ll arr1[n], arr2[m];
	for(int i = 0; i< n; i++)
		cin >> arr1[i];
	for(int i = 0; i< m; i++)
		cin >> arr2[i];
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);
	ll arr[n + m];
	int index = 0;
	int p_j = 0;
	for(int i = 0; i < n; i++){
		if(p_j < m)
			while(arr1[i] > arr2[p_j]){
				p_j ++;
			}
		else
			break;
		if(arr1[i] == arr2[p_j]){
			if(arr1[i] != arr[index - 1])
				arr[index++] = arr1[i];
		}
	}
	for(int i = 0; i < index; i++)
		cout << arr[i] <<" ";
}
