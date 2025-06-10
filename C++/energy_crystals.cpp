#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif


// 5 5 11

int main(){
    int t; cin >> t;
    while (t--){
        int x; cin >> x;
        int a, b, c; a = b = c = 0;

        int ops = 0;
        while (a < x or b < x or c < x) {
            if (a > b) swap(a, b);
            if (b > c) swap(b, c);
            if (a > b) swap(a, b);
            debug(a);
            debug(b);
            debug(c);
            
            
            int maxIncrease = b*2 + 1;
            a = maxIncrease;
            if (a > x) a = x;



            ops++;
        }
        cout << ops << "\n";
    }

}
