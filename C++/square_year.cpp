#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    set<int> squares;
    for (int i = 0; i*i <= 9999; i++){
        squares.insert(i*i);
        debug("ihie");
    }
    while (c--){
        int s; cin >> s;
        if (squares.count(s)){
            if (sqrt(s) > 99){
                cout << "99 " << sqrt(s) - 99 << "\n";
            } else {
                cout << "0 " << sqrt(s) <<"\n";
            }
        } else {
            cout << -1 << "\n";
        }
        

    }
}
