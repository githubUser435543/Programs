#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif


int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(ios::badbit | ios::failbit);

    int c; cin >> c;
    while (c--) {
        int n, x; cin >> n >> x;
        int xcpy = x;
        int res = 0;
        int resSize = 0;
        bool smaller = false;

        if (n == 1 and x == 0){
            cout << -1 << "\n";
            continue;
        }
        if (x == 1 and n & 1){
            cout << n << "\n";
            continue;
        } else if (x == 1){
            cout << n + 3 << "\n";
            continue;
        }

        for (int i = 0; i < 32; i++){
            if (resSize == n){
                smaller = true;
                res += xcpy;
                resSize++;
                break;
            }
            if (x & (1 << i)){
                res += (x & (1 << i));
                resSize++;
                xcpy -= x & (1 << i);
            }
        }

        if (smaller){
            cout << res << "\n";
            continue;
        }
        // handle edge if n == 2
        if ((n - resSize) & 1){
            while (resSize < n) {
                res += 1; 
                resSize++;
            }
            debug("rep3");
             bool allOdd = true;
            for (int i = 0; i < resSize; i++){
                if (resSize == res) continue;
                allOdd = false;
                res++;
                break;
            }
            if (allOdd){
                res += 3;
            }

            cout << res << "\n";
            
        } else {
            while (resSize < n) {
                res += 1; 
                resSize++;
            }
            cout << res << "\n";
        }
    }

}

