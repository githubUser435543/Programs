#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
    int c; cin >> c;
    while (c--) {
        int x, y, a; cin >> x >> y >> a;
        
        int r = a % (x + y);
        if (r - x >= 0){
            puts("YES");
        } else {
            puts("NO");
        }
        //
    }
}
