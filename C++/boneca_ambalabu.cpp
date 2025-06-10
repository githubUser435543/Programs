#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    long long c; cin >> c;
    while (c--) {
        long long n; cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) cin >> arr[i];
        
        vector<long long> ones(32);

        for (long long i : arr)
            for (long long j = 0; j < 32; j++)
                if (i & (1 << j)) ones[j]++;

        long long hi = -1;
        for (long long i : arr){
            long long currSum = 0;
            for (long long j = 0; j < 32; j++){ 
                if (i & (1 << j)){
                    currSum += (n - ones[j]) * (1 << j);
                } else {
                    currSum += ones[j] * (1 << j);
                }
            }
            hi = (currSum > hi) ? currSum : hi;
        }

        cout << hi << "\n";

    }
}
