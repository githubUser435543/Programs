#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, n; cin >> a >> b >> c >> n;
    if (a and b and c and a+b+c >= n and n > 2 /* not sure if last part is needed */){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
