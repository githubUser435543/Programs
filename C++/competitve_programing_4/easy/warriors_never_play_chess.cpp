#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; scanf("%d", &c);
    while (c--) {
        long long w; scanf("%lld", &w);
        printf("%lld\n", (long long)floor(sqrt((2 * w) + 0.25) - 0.5));
        
    }
}

