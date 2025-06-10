#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin >> c;
    int m = 0;
    while (c--) {
        string s; cin >> s;
        if (s[0] == 'd'){
            int tmp; cin >> tmp;
            m += tmp;
        } else {
            printf("%d\n", m);
        }
    }
}
