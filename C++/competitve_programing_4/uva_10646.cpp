#include <bits/stdc++.h>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

struct Card {
    int rank;
    char suit;
    string outStr;
    
    Card(string _outStr){
        outStr = _outStr;
        suit = _outStr[1];
        rank = (unordered_set({'K', 'Q', 'J', 'T', 'A'}).count(_outStr[0])) ? 10 : _outStr[0] - '0';
    }
};

int main(){
    int c; cin >> c;
    vector<Card> deck;
    while (c--) {
        for (int i = 0; i < 52; i++){
            string tmp; 
            cin >> tmp;
            deck.push_back(Card(tmp));
        }

        // top 25 onto stack
        // read
        // decard(pop) 1 + x-10
        // rep 2 more times
        // put stack back on 
        // iterate k backward

        stack<Card> stk;
        for (int i = 0; i < 25; i++){
            stk.push(deck[size(deck)-1]);
            deck.pop_back();
        }

        for (){}
    }
}
