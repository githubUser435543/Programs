#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--) {
        int n, m, k; cin >> n >> m >> k;
        if (k <= ((m + 1) / 2) * n){
            cout << "1" << "\n";
            continue;
        }

        
        int filledInRow = (k + n - 1) / n;
        int notFilled = m - filledInRow;
        if (notFilled == 0){
            cout << m << "\n";
        }
        int res = 1 + (filledInRow - 1) / notFilled;
        cout << res << "\n";
    // (filled_in_row / not_filled) + 1 * (filled % not_filled)
    // #.##
    }
}
