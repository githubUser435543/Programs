#include <stdio.h>

int main(){
    long long n; scanf("%lld", &n);
    long long a[n];
    for (long long i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }

    long long res = 0;
    long long hi = 1;
    for (long long i = 0; i < n; i++){
        if (a[i] < hi){
            res += hi - a[i];
        } else {
            hi = a[i];
        }
    }
    printf("%lld\n", res);
}
