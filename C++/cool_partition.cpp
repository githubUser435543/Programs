#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--){
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sections = 0;
        unordered_set<int> currSet;
        unordered_set<int> nxtSet;
        for (int i = 0; i < n; i++){
            nxtSet.insert(arr[i]);
            if (currSet.contains(arr[i]))
                currSet.erase(arr[i]);
            
            if (currSet.empty()){
                sections++;
                currSet = nxtSet;
            }

        }
        cout << sections << "\n";
    }

}
