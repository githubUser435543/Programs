#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; scanf("%d", &c);
    while (c--) { 
        int a, b; cin >> a >> b;
        if (a < b){puts("<");}
        else if (a > b){puts(">");}
        else {puts("=");}
    }
}
