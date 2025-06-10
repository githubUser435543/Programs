#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--) {
        double res = 0;
        int f; cin >> f;
        float s, a, e;
        while (f--){
            scanf("%f %f %f", &s, &a, &e);
            float tmp = (s / a) * (e * a);
            debug(tmp);
            res += tmp;
        }
        printf("%lld\n", (long long)round(res));
    }
}
