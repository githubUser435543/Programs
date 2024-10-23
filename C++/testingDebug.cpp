#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

/*
template<typename T>
void print(T x) {
    if constexpr (is_core<T>) {
        cerr << x;
    } else if constexpr (is_pair<T>) {
        cerr << '(';
        print(x.first);
        cerr << ", ";
        print(x.second);
        cerr << ')';
    } else if constexpr (is_iterable<T>) {
        cerr << '[';
        bool flag = false;
        for (auto y : x) {
            if (flag) {
                cerr << ", ";
            }
            print(y);
            flag = true;
        }
        cerr << ']';
    } else {
        cerr << "Unknown type";
    }
}
*/
// compile w/ -DLOCAL
int main(){
	vector<int> testArr {4, 2, 0, 6, 9};
	print(testArr);
	return 0;
}