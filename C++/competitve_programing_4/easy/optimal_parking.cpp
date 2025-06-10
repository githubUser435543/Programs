#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--){
        int n; vector<int> v;
        cin >> n;
        while (n--){
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        printf("%d\n", 2 * (v[size(v)-1] - v[0]));
    }
}
