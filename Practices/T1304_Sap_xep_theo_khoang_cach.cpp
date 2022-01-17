#include<bits/stdc++.h> 
using namespace std; 

main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		int n, k;
		cin >> n >> k;
		int a[n];
		int j = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++){
	        int min = i;
	        for (int j = i + 1; j < n; j++)
	            if (abs(k - a[min]) > abs(k -a[j]))
	                min = j;
	        int key = a[min];
	        while (min > i)
	        {	
	            a[min] = a[min - 1];
	            min--;
	        }
	        a[i] = key; 
	    }
		for(int i = 0; i < n; i ++)
			cout << a[i] <<" ";
		cout <<endl;
	} 
	return 0; 
}

