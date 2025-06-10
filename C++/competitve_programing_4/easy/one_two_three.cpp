#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin >> c; 
    while (c--) {
        string s; cin >> s;
        bool o1 = s[0] == 'o';
        bool o2 = s[1] == 'n';
        bool o3 = s[2] == 'e';
        if (size(s) == 5){
            puts("3");
        } else if ((o1 and o2) or (o2 and o3) or (o1 and o3)){
            puts("1");
        } else {
            puts("2");
        }
    }
}
