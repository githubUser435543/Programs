#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

#define sz(x) int(size(x))


template<integral T>
T mod(T a, T b){return a % b + b;}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(ios::badbit | ios::failbit);

    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d)) {
        if (a == 0 and b == 0 and c == 0 and d == 0) return 0;
        int ticks = ((a - b) % 40 + 40) % 40 + ((c - b) % 40 + 40) % 40 + ((c - d) % 40 + 40) % 40;
        printf("%d\n", (ticks * 9));
        // 2 rotations
        // b - a % 40
        // 1 rotations
        // (c - b) % 40
        // (d - c) % 40
    }

}

