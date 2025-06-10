#include <bits/stdc++.h>
#include <cstdlib>
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
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];


        vector<int> flat1;
        vector<int> flat2;
        for (int i = 0; i < size(a); i++){
            if (i & 1){
                flat1.push_back(a[i]);
                flat2.push_back(b[i]);
            } else {
                flat1.push_back(b[i]);
                flat2.push_back(a[i]); 
            }
        }
        debug(flat1);
        debug(flat2);
        vector<int> latestOfNum1(n+1, -1);
        vector<int> latestOfNum2(n+1, -1);
        for (int i = 0; i < n; i++)
            latestOfNum1[flat1[i]] = i;
        for (int i = 0; i < n; i++)
            latestOfNum2[flat2[i]] = i;

        int hi = 0;

        debug(hi);
        for (int i = 0; i < size(latestOfNum1); i++){
            int lo = min(latestOfNum1[i] + 1, latestOfNum2[i] + 1);
            hi = max(hi, lo);
        }
        debug(hi);


        int tmp = -1;
        unordered_set<int> numbersSeen;
        for (int i = size(flat1) - 1; i > hi - 1; i--){
            if (numbersSeen.contains(flat1[i])){
                hi = max(hi, i + 1);
                break;
            }
            if (tmp != -1)
                numbersSeen.insert(tmp);
            tmp = flat1[i];
        }
        debug(hi);

        tmp = -1;
        numbersSeen = unordered_set<int>();
        for (int i = size(flat2) - 1; i > hi - 1; i--){
            if (numbersSeen.contains(flat2[i])){
                hi = max(hi, i + 1);
                break;
            }
            if (tmp != -1)
                numbersSeen.insert(tmp);
            tmp = flat2[i];
        }
        debug(hi);

        for (int i = size(a) - 1; i > -1; i--){
            if (a[i] == b[i]){
                hi = max(hi, i + 1);
            }
        }
        debug(hi);

        cout << hi << "\n";
    

    }

}
