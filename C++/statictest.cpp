#include <bits/stdc++.h>
using namespace std;

void foobar(int foo){
    static int bar = foo;
}

int main(){
    int bar;
    foobar(5);
    cout << bar << endl;
    return 0;
}
