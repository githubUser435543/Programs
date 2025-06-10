#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int i = 1;
int main(){
    int c; cin >> c;
    while (c--){
        int n, k, p;
        cin >> n >> k >> p;

        printf("Case %d: %d\n", i, ((k - 1 + p) % n) + 1);
        i++;
    }
}
