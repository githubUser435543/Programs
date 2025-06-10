#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--) {
        int n; cin >> n;
        string s; cin >> s;
        s = '0' + s;
        debug(s);
        int swaps = 0;
        for (int i = 0; i < n; i++)
            if (s[i] != s[i+1]) swaps++;
        if (swaps <= 1){
            cout << size(s) - 1 + swaps << "\n";
        } else if (swaps == 2) {
            cout << size(s) - 1 + 1 << "\n";
        } else {
            debug(swaps);
            cout << size(s) - 1 + swaps - 2 << "\n";
        }
    }
}
