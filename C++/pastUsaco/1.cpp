#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll numCows; cin >> numCows;
    ll numCanes; cin >> numCanes;

    vector<ll> cowHeights;
    for (ll i = 0; i < numCows; i++){
        ll cow; cin >> cow;
        cowHeights.push_back(cow);
    }
    
    vector<ll> caneHeights;
    for (ll i = 0; i < numCanes; i++){
        ll cane; cin >> cane;
        caneHeights.push_back(cane);
    }
    
    vector<ll> hFromGround(size(caneHeights), 0);
    
    ll cowPtr = 0;
    ll canePtr = 0;
    while (canePtr < size(caneHeights)){
        //cout << "hfg: " << hFromGround[canePtr] << endl; // debug
        //cout << "ch: " << cowHeights[cowPtr] << endl; // debug
        if (hFromGround[canePtr] <= cowHeights[cowPtr]){
            ll amtEaten = min(cowHeights[cowPtr], caneHeights[canePtr]) - hFromGround[canePtr];
            cowHeights[cowPtr] += amtEaten;
            hFromGround[canePtr] += amtEaten;
            if (hFromGround[canePtr] == caneHeights[canePtr]){
                canePtr++; // used up cane
                cowPtr = 0;
                continue;
            }
        }
        
        
        if (cowPtr < int(size(cowHeights)-1)){cowPtr++;}
        else {
            cowPtr = 0;
            canePtr++;
        }
    }
    
    for (auto c : cowHeights) cout << c << "\n"; // output

    return 0;
}
