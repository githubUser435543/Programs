
#include <iostream>
#include <ostream>
#include <vector>

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define sz(x) int(size(x))
#define MOD 1'000'000'007
using namespace std;

// we use a 2D tabulation table that takes in our location and the value at that location
// At each spot is the culmative amount of combinations that can lead to that spot
int solution(vector<int> arr, int lim){
    // we are going to add combinations foward not multiply them so it's 0
    // sz + 1 is because values start at one
    vector<vector<int>> dp(sz(arr), vector(lim+1, 0)); // dp.at(location).at(val)
    
    // initalization
    // We're going to skip values of 0 (in our dp table not the arr) because 0 combinations means we can't get there
    // If the first item is a 0 then we have to make all values 1 so we can start
    if (arr[0] == 0){
        for (int i = 1; i < lim + 1; i++){ dp.at(0).at(i) = 1; }
    } else { dp.at(0).at(arr[0]) = 1;}

    for (int i = 0; i < sz(dp); i++){
        for (int j = 1; j < sz(dp[0]); j++){
            if (dp.at(i).at(j) == 0) continue; 
            debug(i, j);
            

            // no transitions when at end
            if (i < sz(dp) -1){
                // we can't set values of an already set index
                if (arr[i + 1] != 0){
                    debug("should print twice");
                    if (j-1 == arr[i + 1]) {
                        dp.at(i+1).at(j-1) += dp.at(i).at(j);
                        dp.at(i+1).at(j-1) %= MOD
                        debug("ran3"); // not running
                    }
                    debug(dp);
                    if (j   == arr[i + 1])  {
                        dp.at(i+1).at(j) += dp.at(i).at(j);
                        dp.at(i+1).at(j) %= MOD
                        debug("ran2");

                    }
                    debug(dp);
                    if (j+1 == arr[i + 1]) {
                        dp.at(i+1).at(j+1) += dp.at(i).at(j);
                        dp.at(i+1).at(j-1) %= MOD
                        debug("ran1");
                    }
                    debug(dp);
                    debug("\n");
                    continue;
                }

                // transitions at zeros
                if (0 < j-1 and j-1 < sz(dp.at(0))){
                    dp.at(i+1).at(j-1) += dp.at(i).at(j);
                    dp.at(i+1).at(j-1) %= MOD;
                }
                if (0 < j   and j   < sz(dp.at(0))){
                    dp.at(i+1).at(j)   += dp.at(i).at(j);
                    dp.at(i+1).at(j) %= MOD;
                }
                if (0 < j+1 and j+1 < sz(dp.at(0))){
                    dp.at(i+1).at(j+1) += dp.at(i).at(j);
                    dp.at(i+1).at(j+1) %= MOD;
                }
            }


        }
    }
    int res = 0;
    //debug(dp);
    for (int i = 1; i < sz(dp.at(0)); i++){
        res += dp.at(sz(dp)-1).at(i);
        res %= MOD;
    }
    return res;
}

int main(){
    int inArrSize; cin >> inArrSize;
    int bound; cin >> bound;

    vector<int> inArr;
    for (int i = 0; i < inArrSize; i++){
        int item; cin >> item;
        inArr.push_back(item);
    }

    cout << solution(inArr, bound) << endl;
    return 0;
}


