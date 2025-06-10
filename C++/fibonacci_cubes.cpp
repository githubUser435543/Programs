#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int c; cin >> c;
    const vector<int> fib = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    while (c--) {
        int n, m; cin >> n >> m;
        vector<int> w(m);
        vector<int> l(m);
        vector<int> h(m);

        for (int i = 0; i < m; i++){
            cin >> w[i];
            cin >> l[i];
            cin >> h[i];
        }

        string res;
        for (int i = 0; i < m; i++){
            if (w[i] >= fib[n] and l[i] >= fib[n] and h[i] >= fib[n] and max(max(w[i], l[i]), h[i]) >= fib[n] + fib[n - 1]){
                res += '1';
            } else {
                res += '0';
            }
        }
        puts(res.c_str());

    }
}
