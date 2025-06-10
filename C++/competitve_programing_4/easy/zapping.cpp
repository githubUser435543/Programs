#include <bits/stdc++.h>
#include <pthread.h>
#include <utility>
using namespace std;

int main(){
    int a, b;
    while (scanf("%d %d", &a, &b)) {
        if (a == -1 and b == -1){
            return 0;
        }

        if (a > b){
            swap(a, b);
        }

        if (b - a < 50){
            cout << b - a << "\n";
        } else {
            cout << (99 - b) + a + 1<< "\n";
        }
    }

}
