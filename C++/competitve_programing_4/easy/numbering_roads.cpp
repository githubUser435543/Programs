#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, n; int i = 1;
    while (scanf("%d %d", &r, &n)) {
        // posible roads = n * (suffixes + 1)
        if (r == 0 and n == 0){exit(0);}
        if (n == 0 or r > n * 27){
            printf("Case %d: impossible\n", i);
            i++;
            continue;
        }
        if (r % n == 0){
            printf("Case %d: %d\n", i, (r / n) - 1);
        } else {
            printf("Case %d: %d\n", i, r / n);
        }
        i++;
    }
    
}
