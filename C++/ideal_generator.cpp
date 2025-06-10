#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;cin >> c;
    while (c--) {
        int k; cin >> k;
        cout << ((k & 1) ? ("Yes") : ("No")) << "\n";
    }
}
