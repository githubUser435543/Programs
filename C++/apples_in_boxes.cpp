#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int c; cin >> c;
    while (c--) {
        int n, k; cin >> n >> k;
        vector<int> apples(n);
        for (int i = 0; i < n; i++) cin >> apples[i];

        int lo = 1000000001;
        int hi = -1;
        int oneHigher = 0;
        for (int i = 0; i < n; i++) lo = ((lo < apples[i]) ? lo : apples[i]);
        for (int i = 0; i < n; i++) hi = ((hi > apples[i]) ? hi : apples[i]);
        for (int i = 0; i < n; i++) {
            if (lo + k + 1 == apples[i]) oneHigher++;
        }

        if (hi - lo - 1 > k or oneHigher > 1){
            // lo + k + 1
            puts("Jerry");
            continue;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) sum += apples[i];

        if (sum & 1){
            puts("Tom");
        } else {
            puts("Jerry");
        }

        
    }
}
