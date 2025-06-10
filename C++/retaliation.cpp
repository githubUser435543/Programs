#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int c; cin >> c;
    while (c--){
        int n; cin >> n;
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) 
            cin >> arr[i];

        int lo = 1000000001;
        for (int i = 0; i < n; i++){ 
            int loI = (n - i < i + 1) ? n - i : i + 1;
            lo = (lo < (arr[i] / loI)) ? lo : (arr[i] / loI);
        }
        int maxOps = lo;
        int first = arr[0];
        int last = arr[n - 1];

        int normalOps = 0;
        int revOps = 0;

        for (int i = 0; i < maxOps and first > 0 and last > 0; i++){
            if (n + 1 < first and last == first){

                int doubleOps1 = first / (n + 1);
                int doubleOps2 = last / (n + 1);
                int doubleOps = (doubleOps1 < doubleOps2) ? doubleOps1 : doubleOps2;
                first -= (n + 1) * doubleOps;
                last -= (n + 1) * doubleOps;
                revOps += doubleOps;
                normalOps += doubleOps;
            } else if (first > last){
                first -= n;
                last -= 1;
                revOps++;
            } else {
                first -= 1;
                last -= n;
                normalOps++;
            }
        }

        bool explodeable = true;
        for (int i = 0; i < n; i++){
            arr[i] -= (n - i) * revOps + (i + 1) * normalOps;
            if (arr[i]){
                explodeable = false;
            }
        }

        if (explodeable){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
        // iterate subtracting  revindex*revOps + normalIndex*normalOps
        // better be 0


        
    }

}
