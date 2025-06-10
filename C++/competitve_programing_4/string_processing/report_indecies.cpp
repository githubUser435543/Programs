// find all indexes where a given substring begins
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#include "debug.h"


vector<int> getSubstrIndexes(string s, string substr){
    vector<int> res;
    for (int i = 0; i < size(s) - size(substr) + 1; i++){
        if (s.substr(i, size(substr)) == substr) res.push_back(i);
    }
    return res.empty() ? vector(1, -1) : res;
}

int main(){
    // 0 9 23
    debug(getSubstrIndexes("cowfarmercowjohnhas365ccows", "cow"));
    debug(getSubstrIndexes("I love CS3233 Competitive Programming. i also love AlGoRiThM", "love"));
    debug(getSubstrIndexes("I love CS3233 Competitive Programming. i also love AlGoRiThM", "book"));
}
