#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<long long, long long>& a, const pair<long long, long long>& b){
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}


long long findInd(vector<pair<long long, long long> >& preSum, long long n, long long val){
	long long l = 0;
	long long h = n - 1;
	long long mid;

	long long ans = -1;
	while (l <= h) {
		mid = (l + h) / 2;
		if (preSum[mid].first <= val) {
			ans = mid;
			l = mid + 1;
		}
		else
			h = mid - 1;
	}

	return ans;
}

long long Max(long long arr[], long long n, long long x){
	long long i;
	for (i = 0; i < n; i++)
		arr[i] -= x;

	long long maxlen = 0;

	vector<pair<long long, long long> > preSum;

	long long sum = 0;


	long long minInd[n];

	for (i = 0; i < n; i++) {
		sum = sum + arr[i];
		preSum.push_back({ sum, i });
	}

	sort(preSum.begin(), preSum.end(), compare);

	minInd[0] = preSum[0].second;

	for (i = 1; i < n; i++) {
		minInd[i] = min(minInd[i - 1], preSum[i].second);
	}

	sum = 0;
	for (i = 0; i < n; i++) {
		sum = sum + arr[i];

		if (sum >= 0)
			maxlen = i + 1;
		else {
			long long ind = findInd(preSum, n, sum);
			if (ind != -1 && minInd[ind] < i)
				maxlen = max(maxlen, i - minInd[ind]);
		}
	}

	return maxlen;
}

int main(){
	long long n, x;
	cin >> n >> x;
	long long arr[n];
	for(long long i = 0; i < n; i++)
		cin >> arr[i];

	cout << Max(arr, n, x);
	return 0;
}

