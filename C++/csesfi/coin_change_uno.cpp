#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

vector<int> getListOfInts(int numInts){
    vector<int> intList = {};
    for (int i = 0; i < numInts; i++){
        int tmp = 0; cin >> tmp;
        intList.push_back(tmp);
    }
    return intList;
}

int highest(vector<int> arr){
	int hi = arr[0];
	for (int item : arr){
		hi = hi < item ? item : hi;
	}
	return hi;
}

int main(){
	int amtCoins; cin >> amtCoins;
	int goal; cin >> goal;	
	vector<int> coins = getListOfInts(amtCoins);
	
	vector<int> dp(goal + highest(coins), 0);
	vector<bool> emptydpofi(amtCoins, false);
	vector<vector<bool>> coinsUsedDp(goal + highest(coins), emptydpofi);

	for (int i = 0; i < amtCoins; i++){
		dp[coins[i] - 1] = 1;
		coinsUsedDp[coins[i] - 1][i] = true;
	}

	for (int i = 0; i < goal; i++){
		if (dp[i] == 0) continue;
		// for each coin we add ourself +1 to future
		// Then we subtract one for each true in coinsUsedDp bc it's not unique
		for (int c = 0; c < int(size(coins)); c++){
			if (coinsUsedDp[i][c] == true){
				//dp[i + coins[c]] += dp[i];
				dp[i + coins[c]] += 1; // just trying shit now
				coinsUsedDp[i + coins[c]][c] = true;
			} else {
				dp[i + coins[c]] += dp[i] + 1;
				coinsUsedDp[i + coins[c]][c] = true;
			}
		}
	}
	cout << dp[goal - 1] << "\n";

}
