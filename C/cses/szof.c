#include <stdio.h>
int main(){
    char ch = 5;
    printf("char: %lu\n", sizeof(ch));
    short sh = 5;
    printf("short: %lu\n", sizeof(sh));
    int i = 5;
    printf("int: %lu\n", sizeof(i));
    long l = 5;
    printf("long: %lu\n", sizeof(l));
    long long ll = 5;
    printf("long long: %lu\n", sizeof(ll));
}
