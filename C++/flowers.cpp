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

#define bg(x) begin(x)
#define ed(x) end(x)
#define all(x) bg(x), ed(x)
#define rall(x) rbegin(x), rend(x)

#define ft(x) (x).front()
#define bk(x) (x).back()
#define sz(x) int(size(x))

#define fi first
#define se second

template<class T> using vec = vector<T>;
template<class T, size_t N> using arr = array<T, N>;

using ll = long long;
using ld = long double;
using str = string;

using pi = pair<int, int>;
using pl = pair<ll, ll>;

using vb = vec<bool>;
using vi = vec<int>; 
using vl = vec<ll>;
using vd = vec<ld>;
using vs = vec<str>;
using vpi = vec<pi>;
using vpl = vec<pl>;

template<class T> ll fst_true(ll lo, ll hi, T f) {
    while (lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        (f(mid) ? hi : lo) = mid;
    }
    return hi;
}

template<class T> ll lst_true(ll lo, ll hi, T f) {
    lo--;
    while (lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        (f(mid) ? lo : hi) = mid;
    }
    return lo;
}
template<class T> bool ckmin(T &a, T b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T &a, T b) { return b > a ? a = b, 1 : 0; }

const int inf = INT_MAX / 2;
const ll infl = LLONG_MAX / 2;


vector<int> getListOfInts(int numInts){
    vector<int> intList = {};
    for (int i = 0; i < numInts; i++){
        int tmp = 0; cin >> tmp;
        intList.push_back(tmp);
    }
    return intList;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(ios::badbit | ios::failbit);

    int cases; cin >> cases;
    rep2(c, cases){
        int flowers; cin >> flowers;
        int coins; cin >> coins;
        vi flowerList = getListOfInts(flowers);
        sort(flowerList.begin(), flowerList.end()); 
        int highest = flowerList[sz(flowerList)];
    	int lowest = flowerList[0];

    	for (int i = lowest+1; i < highest-1){
    		int low = lst_true(flowerList.begin(), flowerList.end(),i-1)
    	}

    }
}

