#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    int ans;
    while (scanf("%d\n", &ans) != EOF) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
        printf("%d\n", (a == ans) + (b == ans) + (c == ans) + (d == ans) + (e == ans));
    }
}
