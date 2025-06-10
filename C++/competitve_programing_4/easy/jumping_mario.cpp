#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin >> c;
    int i = 1;
    while (c--) {
        int n; cin >> n;
        vector<int> v;
        while (n--) {
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        int hi = 0; int lo = 0;
        for (int i = 0; i < size(v)-1; i++){
            if (v.at(i+1) > v[i]) hi++;
            if (v.at(i+1) < v[i]) lo++;
        }
        printf("Case %d: %d %d\n", i, hi, lo);
        i++;
    }
}
