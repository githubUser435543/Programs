#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0; cin >> n;
	vector<long long> dp(n+6, 0); 
	for (int i = 0; i < int(size(dp))-6; i++){
		if (i <= 5) dp[i] += 1;
		for (int j = 1; j <= 6; j++){
			dp[i+j] += dp[i] % 1000000007;
			dp[i+j] = dp[i+j] % 1000000007;
		}
	}
	cout << dp[size(dp)-7] % 1000000007 << endl;
}