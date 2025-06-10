#include <bits/stdc++.h>
using namespace std;

int main(){
    int j = 1;
    while (1) { 
        int n; cin >> n;
        if (n == 0) return 0;
        int res = 0;
        for (int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            (tmp == 0) ? res-- : res++;
        }
        printf("Case %d: %d\n", j, res);
        j++;
    }
}
