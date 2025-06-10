#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; scanf("%d", &c);
    while (c--) {
        int n; scanf("%d", &n);
        string res = to_string((((n * 63) + 7492) * 5) - 498);
        printf("%d\n", res[size(res)-2] - '0');
    }
}
