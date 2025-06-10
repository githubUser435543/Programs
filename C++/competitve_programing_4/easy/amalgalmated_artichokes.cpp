#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// 2 5 7
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

double f(int p, int a, int b, int c, int d, int k){
    return p * (sin((a * k) + b) + cos((c * k) + d) + 2);
}

int main(){
    int p, a, b, c, d, n;
    while (scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF) {
        /*if (n == 1){
            puts("0");
            continue;
        }*/
        double hi = f(p, a, b, c, d, 1);
        double largestDecrease = 0;
        for (int i = 1; i < n; i++){
            double fres = f(p, a, b, c, d, i);
            if (fres > hi){
                hi = fres;
            } else {
                if (not (largestDecrease > hi - fres)){
                    largestDecrease = hi - fres;
                }
            }
        }

        cout << setprecision(20) << largestDecrease << "\n";

    }
}
