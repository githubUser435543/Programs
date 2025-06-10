#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin >> c;
    int i = 1;
    while (c--) {
        int l, w, h; cin >> l >> w >> h;
        if (l > 20 or w > 20 or h > 20){
            printf("Case %d: bad\n", i);
        } else {
            printf("Case %d: good\n", i);
        }
        i++;
    }
}
