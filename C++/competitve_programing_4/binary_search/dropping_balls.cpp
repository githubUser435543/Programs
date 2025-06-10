#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--){
        int d, b; cin >> d >> b;
        vector<int> tree((1 << (d)) - 1);
        for (int i = 0; i < b; i++){
            for (int j = 1; j <= size(tree); tree[j] ^= 1, j = (not tree[j] ? j*2+1 : j*2)){
                if (d == 3 and b == 4){
                    debug(i);
                    debug(b - 1);
                    debug(j*2);
                    debug(tree[j] ? j*2+1 : j*2);
                    debug(size(tree));
                }
                if (i == b - 1 and j*2 >= size(tree)){
                    cout << j << "\n";
                }
            }
        }
    }
    scanf("%*d"); // ffs pick a method and stick with it. test cases and terminated by -1? Nobody needs this.
}
