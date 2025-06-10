#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
#include <utility>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif


int main(){
    int c; cin >> c;
    while (c--) {
        int n, m, a, b; cin >> n >> m >> a >> b;

        int dSpace = m - b;
        int uSpace = m - dSpace - 1;

        int rSpace = n - a;

        int lSpace = n - rSpace - 1;

        int vCut = (dSpace > uSpace) ? dSpace : uSpace;
        int hCut = (lSpace > rSpace) ? lSpace : rSpace;

        int res = INT_MAX;
        for (auto [ni, mi] : {make_pair(n, m - vCut), make_pair(n - hCut, m)}){
            int cuts = 1;
            while (ni > 1){
                ni = (ni + 1)/2;
                cuts++;
            }
            while (mi > 1){
                mi = (mi + 1)/2;
                cuts++;
            }
            res = (cuts < res) ? cuts : res;
        }
        cout << res << "\n";
    }
}
