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
        int n; cin >> n;
        string s; cin >> s;

        if (n == 2){
            (s[0] == 'A') ? puts("Alice") : puts("Bob");
            continue;
        }

        int bobs = 0; 
        for (int i = 0; i < n; i++) bobs += s[i] - 'A';
        if (bobs == 1){
            puts("Alice");
            continue;
        }

        if (s[size(s)-1] == 'A' and (s[0] == 'A' or s[size(s)-2] == 'A')){
            debug(s);
            debug(s[0]);
            debug(s[size(s)-2]);
            debug(s);
            puts("Alice");
        }else 
            puts("Bob");
    }
}
