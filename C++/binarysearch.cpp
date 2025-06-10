#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int bsMax(int lo, int hi, function<bool(int)> f ){
    lo--;
    for (int d = hi - lo; d > 0; d /= 2){
        while (lo + d <= hi and f(lo + d)) {lo += d;}
    }
    return lo;
}


bool ltesix(int x){return x <= 6;}

int main(){
    int res = bsMax(0, 5, ltesix);
    puts("test1 started");
    debug(res);
    assert(res == 5);
    puts("test1 finished");

    res = bsMax(0, 6, ltesix);
    puts("test2 started");
    debug(res);
    assert(res == 6);
    puts("test2 finished");

    res = bsMax(0, 7, ltesix);
    puts("test3 started");
    debug(res);
    assert(res == 6);
    puts("test3 finished");

    res = bsMax(6, 7, ltesix);
    puts("test4 started");
    debug(res);
    assert(res == 6);
    puts("test4 finished");

    res = bsMax(6, 10, ltesix);
    puts("test5 started");
    debug(res);
    assert(res == 6);
    puts("test5 finish");
}
