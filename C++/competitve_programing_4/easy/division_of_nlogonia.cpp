#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

string getLocation(int x, int y){
    if (x == 0 or y == 0){
        return "divisa";
    }
    if (x > 0){
        if (y > 0){
            return "NE";
        } else {
            return "SE";
        }
    } else {
        if (y > 0){
            return "NO";
        } else {
            return "SO";
        }
    }
}

int main(){
    int r;
    while (cin >> r) {
        if (r == 0) return 0;
        int ox, oy; cin >> ox >> oy;
        while (r--) {
            int x, y; cin >> x >> y;
            cout << getLocation(x - ox, y - oy) << "\n";
        }
    }
    int n; cin >> n;
}
