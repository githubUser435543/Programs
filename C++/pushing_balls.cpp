// hey, i didn't choose the name
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
        int n, m; cin >> n >> m;
        vector<string> grid;
        for (int i = 0; i < n; i++){
            string tmp; cin >> tmp;
            grid.push_back(tmp);
        }
        debug(grid);
        bool valid = true;
        for (int i = 1; i < n; i++){
            for (int j = 1; j < m; j++){
                debug(grid[i][j]);
                debug(i);
                debug(j);
                if (grid[i][j] == '0') continue;
                if (grid[i-1][j] == '0' and grid[i][j-1] == '0'){
                    debug("end");
                    valid = false;
                    break;
                }
            }
            if (not valid) break;
        }

        valid ? puts("YES") : puts("NO");
    }

}
