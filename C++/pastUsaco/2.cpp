#include <bits/stdc++.h>
using namespace std;

typedef long long ll 
typedef vector vec
typedef vec<int> vi

int main(){
    int cases; cin >> cases;
    for (int c = 0; c < cases; cases++){
        int numPlants; cin >> numPlants;

        vi yInercepts;
        for (int i = 0; i < numPlants; i++){
            int yInt; cin >> yInt;
            yInercepts.push_back(yInt);
        }

        vi slopes;
        for (int i = 0; i < numPlants; i++){
            int m; cin >> m;
            yInercepts.push_back(m);
        }

        vi tallerThanList;
        for (int i = 0; i < numPlants; i++){
            int tTval; cin >> tTval;
            tallerThanList.push_back(tTval);
        }

        
        
    }
    return 0;
}
