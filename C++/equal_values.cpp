#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--){
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &i : arr) cin >> i;

        vector<long long> frequency(n+1, 0); // TODO: find largest contigous instead
        int currNumber = 0;
        long long count = 0;
        for (int i : arr){
            if (i == currNumber){
                count++;
            } else {
                frequency[currNumber] = max(frequency[currNumber], count);
                count = 1;
                currNumber = i;
            }
        }// else after loop again
        frequency[currNumber] = max(frequency[currNumber], count);
        
        debug(frequency);
        long long cost = 1e15;
        for (int i = 1; i < size(frequency); i++){
            if (frequency[i] == 0) continue;
            cost = min(cost, (n - frequency[i]) * i);
        }

        cout << cost << "\n";
    }
}
