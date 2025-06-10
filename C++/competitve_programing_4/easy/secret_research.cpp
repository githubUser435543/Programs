#include <bits/stdc++.h>
using namespace std;

// worst problem statment I have read in my life
// why are the defintions of S recursive? No explanation of what to do if none of the cases apply
// thank god for example test cases

int main(){
    int c; scanf("%d", &c);
    while (c--) {
        string s; cin >> s;
        if (s == "4" or s == "1" or s == "78"){
            puts("+");
        } else if (s[size(s)-2] == '3' and s[size(s)-1] == '5'){
            puts("-");
        } else if (s[0] == '9' and s[size(s)-1] == '4'){
            puts("*");
        } else {
            puts("?");
        }
    }
}
