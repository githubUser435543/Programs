#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if ((a and b and c) or (!a and !b and !c)){
            puts("*");
            continue;
        }
        if ((a and b) or (!a and !b)){
            puts("C");
            continue;
        }

        if ((c and b) or (!c and !b)){
            puts("A");
            continue;
        }

        if ((a and c) or (!a and !c)){
            puts("B");
            continue;
        }
    }
}
