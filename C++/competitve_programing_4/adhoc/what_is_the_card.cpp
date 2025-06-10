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

//AC KC JC 2C QC 9H 9C 7C 6C 5C AD 4C AS 4D TC 3C QD JD 2D AH TS TD 9D KD 8C 8D 7D 6D 3D 5D KH
//QH JH TH 8H 7H 6H 6S 5H 4H 3H 2H KS QS JS 9S 8S 7S 5S 4S 3S 2S
// JH

int main(){
    int c; cin >> c;
    for (int l = 1; l <= c; l++) {
        vector<Card> deck;
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
        
        int k = 0;
        for (int i = 0; i < 3; i++){
            int x = deck[size(deck)-1].rank;
            deck.pop_back();
            k += x;
            for (int j = 0; j < 10 - x; j++){deck.pop_back();}
        }

        while (!stk.empty()) { 
            deck.push_back(stk.top()); stk.pop();
        }
 
        printf("Case %d: %s\n", l, deck[k-1].outStr.c_str());
    }
}
