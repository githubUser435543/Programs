#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    int c; scanf("%d\n", &c);
    int i = 1;
    while (c--) {
        string ln; vector<int> v;
        getline(cin, ln);
        ln += " ";
        string tmp;
        for (int i = 0; i < size(ln); i++){
            if (ln[i] == ' '){
                v.push_back(stoi(tmp.c_str()));
                tmp = "";
            } else {
                tmp.push_back(ln[i]);
            }
        }
        sort(v.begin(), v.end());
        printf("Case %d: %d\n", i, v.at(size(v) - 1));
        i++;
    }
}
