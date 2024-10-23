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

	vector<int> dp(goal + highest(coins), -1);

	for (int i = 0; i < int(size(coins)); i++){
		dp[coins[i] - 1] = 1;
	}

	
	for (int i = 0; i < goal; i++){
		if (dp[i] == -1) continue;
		int current = dp[i];
		for (int coin : coins){
			if (current + 1 < dp[i + coin] or dp[i + coin] == -1){
				dp[i + coin] = current + 1;
			}

		}
	}
	cout << dp[goal - 1] << "\n";
	return 0;
}
