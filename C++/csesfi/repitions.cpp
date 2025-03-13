#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int maxSubStr = 0;
    int cSubStr = 0;
    char cchar = 'b';
    for (int i = 0; i < int(size(s)); i++){
        if (cchar != s[i]){
            maxSubStr = ((cSubStr > maxSubStr) ? cSubStr : maxSubStr);
            cSubStr = 1;
            cchar = s[i];
        }
        else {
            cSubStr += 1;
            cchar = s[i];
        }
    }
    maxSubStr = ((cSubStr > maxSubStr) ? cSubStr : maxSubStr);
    printf("%d\n", maxSubStr);

}
