#include <bits/stdc++.h>
using namespace std;

int main(){
    bool open = false;
    string s;
    
    while (1) { 
        getline(cin, s);
        if (s == "" and cin, cin.eof()) break;
        string res;
        for (char ch : s){
            if (ch == '"' and not open){
                open ^= 1;
                res += "``";
            } else if (ch == '"' and open){
                open ^= 1;
                res += "''";
            } else {
                res.push_back(ch);
            }
        }
        puts(res.c_str());
    }
}
