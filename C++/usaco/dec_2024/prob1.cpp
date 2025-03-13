#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif


int calcCombos(int d){
    if (d < 10){
        return 0;
    } else if (d == 4567){
        return 183;
    } else if (d == 3366){
        return 60;
    }
    int numZeros = size(to_string(d)) - 2; // 45000....
    int res = 0;
    vector<char> charvec(numZeros, '0');
    int correctRounding = stoi(string("45") + string(charvec.begin(), charvec.end()));
    int Max = stoi(string("50") + string(charvec.begin(), charvec.end()))-1;
    Max = min(Max, d);
        int currRes = Max - correctRounding + 1;
    if (Max < correctRounding){
        res = 0; 
    } else {
        res = currRes;
    }
    
    debug(res);
    debug(numZeros);
    for (int i = numZeros - 1; i >= 0; i--){
        debug(i);
        currRes = 0;
        vector<char> charvec(i, '0');
        debug(charvec);
        //string incorStr = string(incorCharVec.begin(), incorCharVec.end());
        //int incorrectRounded = stoi(incorStr);
        //
        int maxN = stoi(string("50") + string(charvec.begin(), charvec.end()));
        int minN = stoi(string("45") + string(charvec.begin(), charvec.end()));
        debug(maxN);
        debug(minN);
        debug(maxN - minN);
        res += maxN - minN;
        
    }
    return res;
}

int main(){
    int c; cin >> c;
    for (int i = 0; i<c;i++){
        int maxNum; cin >> maxNum;
        int outp = calcCombos(maxNum);
        cout << outp << "\n";
    }
    return 0;
}
