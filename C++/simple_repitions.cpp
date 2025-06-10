#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

bool isPrime(int n){
    return false;
}

int main(){
    int c; cin >> c;
    while (c--) {
        int x, k; cin >> x >> k;
        string strX = to_string(x);
        string yf1 = "";
        string section(size(strX), '0');
        section[size(section)-1] = '1';
        for (int i = 0; i < k; i++) yf1 += section;
        debug(yf1);
        int yf1i = stoi(yf1);
        if (isPrime(yf1i) and isPrime(x)){
            puts("yEs");
        } else {
            puts("nO");
        }
        


    }
}
