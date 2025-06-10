#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif


#define arg4(a, b, c, d, ...) d

#define rep3(i, l, r) for (int i = int(l); i < int(r); i++)
#define rep2(i, n) rep3(i, 0, n)
#define rep(...) arg4(__VA_ARGS__, rep3, rep2) (__VA_ARGS__)

#define per3(i, l, r) for (int i = int(r) - 1; i >= int(l); i--)
#define per2(i, n) per3(i, 0, n)
#define per(...) arg4(__VA_ARGS__, per3, per2) (__VA_ARGS__)

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

#define sz(x) int(size(x))

template<class T> using vec = vector<T>;
template<class T, size_t N> using arr = array<T, N>;

#define lambda(args, expr) [](args) { return expr; }

using ll = long long;
using ld = long double;

using pi = pair<int, int>;
using pl = pair<ll, ll>;

using vb = vec<bool>;
using vi = vec<int>; 
using vl = vec<ll>;
using vd = vec<ld>;
using vs = vec<string>;
using vpi = vec<pi>;
using vpl = vec<pl>;


int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(ios::badbit | ios::failbit);

    int c; cin >> c;
    while (c--) {
        int n, _; cin >> n >> _;
        vector<int> a, b;
        rep(i, n){
            int tmp; cin >> tmp;
            a.push_back(tmp);
        }
        rep(i, n){
            int tmp; cin >> tmp;
            b.push_back(tmp);
        }
        
        int res = 0;
        bool looping = true;
        int off = 0;
        while (looping) {

            looping = false;
            rep(i, n){
                if (a[i] == 0) continue;
                int b_i = ((i + off) % n) + n;
                debug("hi");
                if (b.at(b_i) == 0) continue;
                debug("hello");
                looping = true;
                int lo = min(a[i], b[b_i]);
                a[i] -= lo;
                b[b_i] -= lo;
            }
            off--;
            res++;
        }
        cout << res << "\n";
    }

}

