#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int c; cin >> c; int i = 1;
    while (c--) {
        int a, b, d; cin >> a >> b >> d;
        vector<int> arr = {a, b, d};
        sort(arr.begin(), arr.end());
        printf("Case %d: %d\n", i, arr[1]);
        i++;
    }
}

