#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while (1) {
        getline(cin, s);
        int dots = 0;
        for (char ch : s){
            if (ch == '.'){
                dots++;
            } else {
                dots = 0;
            }
            if (dots == 7) return 0;

        }
        cout << s << endl;
    }
}
