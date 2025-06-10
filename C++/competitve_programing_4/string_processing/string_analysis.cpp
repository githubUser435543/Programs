#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <numeric>
#include <vector>
using namespace std;

#include "debug.h"

void analysis(string s){
    transform(s.begin(), s.end(), s.begin(), [](char ch){return tolower(ch);});
    debug(s);
    int vowels = 0;
    int consonants = 0;
    vector<bool> vowelRes(size(s));
    auto f = [](char ch){return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';};
    debug(1);
    transform(s.cbegin(), s.cend(), vowelRes.begin(), f);
    debug(2);
    vowels = accumulate(vowelRes.begin(), vowelRes.end(), 0);
    consonants = size(s) - vowels;
    debug(vowels);
    debug(consonants);
    
}


int main(){
    analysis("ccCccAaaAa");
    
}
