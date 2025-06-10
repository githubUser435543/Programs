#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--) {
        int a, b, c, d, e; scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if ((a + 1 == b) and (b + 1 == c) and (c + 1 == d)){
            puts("Y");
        } else {
            puts("N");
        }
    }
}
