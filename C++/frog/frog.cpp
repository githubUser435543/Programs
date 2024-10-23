#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> getListOfInts(int numInts){ // works
	vector<ll> intlist = {};
	for (int i = 0; i < numInts; i++){
		ll tmp = 0; cin >> tmp;
		intlist.push_back(tmp);
	}
	return intlist;
}

inline ll getCost(ll h1, ll h2){return abs(h1 - h2);}
ll solution(vector<ll> rocks){
	// State
	vector<ll> dp(rocks.size()+2, 100001); // plus two as a buff to prevent index out of range
	dp[0] = 0;

	// Transitions
	for (ll i = 0; i < int(size(rocks)); i++){
		ll firstCost = getCost(rocks[i], rocks[i+1]);
		ll secondCost = getCost(rocks[i], rocks[i+2]);
		if (dp[i+1] > dp[i] + firstCost) dp[i+1] = dp[i] + firstCost; // if the set dp is worse then what we are doing we'll overwrite it
		if (dp[i+2] > dp[i] + secondCost) dp[i+2] = dp[i] + secondCost;
	}
	return dp[size(dp)-3];
}


int main(){
	int rocks; cin >> rocks;
	vector<ll> hightTotals = getListOfInts(rocks);	
	cout << solution(hightTotals) << "\n";
	return 0;
}
