#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define all(x)  begin(x), end(x)
#define cAll(x)  cbegin(x), cend(x)


int calc(vector<int> arr){
    if (size(arr) == 1){
        return arr[0];
    } 
    int sum = accumulate(arr.begin(), arr.end(), 0);
    debug(sum); 
    string s = to_string(sum);
    debug(s); // good
    vector<int> n;
    auto f = [](char ch){return ch - '0';};
    transform(cAll(s) , back_inserter(n), f);
    debug(n);
    return calc(n);
}


int main(){
    string s1, s2;
    while (1) {
        getline(cin, s1);
        getline(cin, s2);
        if (cin.eof()) return 0;
        vector<int> valArr1;
        vector<int> valArr2;
        for (char ch : s1){ 
            if (isalpha(ch)) valArr1.push_back(tolower(ch) - 'a' + 1);
        }
        for (char ch : s2){
            if (isalpha(ch)) valArr2.push_back(tolower(ch) - 'a' + 1);
        }
        int v1 = calc(valArr1);
        int v2 = calc(valArr2);
        if (v1 > v2) swap(v1, v2);
        printf("%.2f %%\n", (float)v1 * 100 / (float)v2);


    
    }
}
