#include <stdio.h>

int main(){
    int n; // 5
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){a[i] = 0;}
    while (--n){
        int tmp = 0;
        scanf("%d", &tmp);
        a[tmp] = 1;
    }
    int i;
    for (i = 1; i < sizeof(a) / sizeof(a[0]) && a[i]; i++){}
    printf("%d\n", i);

}
