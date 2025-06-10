#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin >> c;
    while (c--) {
        string n; cin >> n;
        int res = 0;
        bool passed = false;
        for (int i = size(n) - 1; i >= 0; i--){
            if (not passed and n[i] == '0'){
                res++;
                continue;
            }
            if (not passed and n[i] != '0'){
                passed = true;
                continue;
            }

            if (n[i] != '0'){
                res++;
            }

        }
        cout << res << "\n";
    }
}
