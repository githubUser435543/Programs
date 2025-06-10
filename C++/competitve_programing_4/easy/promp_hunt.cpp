#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    // players, hunters, objects or players
    int p, h, o;
    while (scanf("%d %d %d", &p, &h, &o) != EOF){
        if (h > o - p){
            puts("Hunters win!");
        } else {
            puts("Props win!");
        }
    }
}
