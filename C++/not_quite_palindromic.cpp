#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        // max: 1000 0001
        // min: 1 if current good pairs is odd else even
        int gpairs, zeros, ones; gpairs = zeros = ones = 0;
        for (int i = 0; i < size(s)/2; i++){
            if (s[i] == s[size(s) - i - 1]){
                gpairs++;
            }
        }
        for (int i = 0; i < size(s); i++){
            if (s[i] == '0'){
                zeros += 1;
            } else if (s[i] == '1'){
                ones += 1;
            }
        }

        int maxPairs = zeros/2 + ones/2;
        debug(k);
        debug(maxPairs);
        debug(gpairs);
        if ((gpairs % 2) == (k % 2) and k <= maxPairs){
            puts("YES");
        } else {
            puts("NO");
        }

    }
}
