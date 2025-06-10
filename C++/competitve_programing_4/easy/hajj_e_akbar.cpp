#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    string s; int i = 1;
    while (cin >> s) {
        if (s == "*") return 0;
        if (s == "Hajj"){printf("Case %d: Hajj-e-Akbar\n", i);}
        else {
            printf("Case %d: Hajj-e-Asghar\n", i);
        }
        i++;
    }
}
