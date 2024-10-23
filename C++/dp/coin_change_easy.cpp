#include <bits/stdc++.h>
using namespace std; 

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

vector<int> getInts(int numInts){
	vector<int> intList;
	for (int i = 0; i < numInts; i++){
		int currInt = 0; cin >> currInt;
		intList.push_back(currInt);
	}
	return intList;
}

int main(){
	int numCoins = 0; cin >> numCoins;
	int amount = 0; cin >> amount;

	vector<int> coins = getInts(numCoins);
	vector<int> dp(amount, 0);
	const int mod = 1000000007;
	
	// base case	
	for (auto coin : coins){
		int dpIndex = coin - 1;
		if (dpIndex < int(size(dp))){ // if coin in range
			dp[dpIndex] = 1;
		}
	}
	debug(dp);
	// solution
	
	for (int i = 0; i < int(size(dp)); i++){	
		if (dp[i] == 0) continue;

		for (auto coin : coins){
			int dpIndex = coin + i;
			if ((dpIndex) < int(size(dp))){ 
				dp[dpIndex] += dp[i] + 1;
				dpIndex = dpIndex % mod;
			}
		}
	}
	
	debug(dp);

	return 0;	
}