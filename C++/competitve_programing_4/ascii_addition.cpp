#include <bits/stdc++.h>
#include <string>
#include <vector>

#ifndef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif
    

using namespace std;

const int topOi = 0; 
const int topOj = 1; 

const int topleftOi = 1; 
const int topleftOj = 0;

const int bleftOi = 4; 
const int bleftOj = 0; 

const int midOi = 3; 
const int midOj = 1; 

const int bOi = 6; 
const int bOj = 1;

const int trOi = 1; 
const int trOj = 4; 

const int brOi = 4; 
const int brOj = 4;

const int plusOi = 2; 
const int plusOj = 2;

int main(){
    vector<string> ascii;
    int a=7; while(a--){
        string tmp;
        cin >> tmp;
        tmp.push_back('.');
        ascii.push_back(tmp);
    }
    // i = 0
    string equation = "";
    for (int j = 0; j < size(ascii[0]); j += 6){
        if (ascii[plusOi][j + plusOj] == 'x'){
            equation.push_back('+');
            continue;
        }
        bool t = ascii[topOi][j + topOj] == 'x';
        bool tl = ascii[topleftOi][j + topleftOj] == 'x';
        bool tr = ascii[trOi][j + trOj] == 'x';
        bool m = ascii[midOi][j + midOj] == 'x';
        bool bl = ascii[bleftOi][j + bleftOj] == 'x';
        bool br = ascii[brOi][j + brOj] == 'x';
        bool b = ascii[bOi][j + bOj] == 'x';

        if (t and tl and tr and m and bl and br and b){
            equation.push_back('8');
        } else if (!t and !tl and tr and !m and !bl and br and !b){
            equation.push_back('1');
        } else if (t and !tl and tr and m and bl and !br and b){
            equation.push_back('2');
        } else if (t and !tl and tr and m and !bl and br and b){
            equation.push_back('3');
        } else if (!t and tl and tr and m and !bl and br and !b){
            equation.push_back('4');
        } else if (t and tl and !tr and m and !bl and br and b){
            equation.push_back('5');
        } else if (t and tl and !tr and m and bl and br and b){
            equation.push_back('6');
        } else if (t and !tl and tr and !m and !bl and br and !b){
            equation.push_back('7');
        } else if (t and tl and tr and !m and bl and br and b){
            equation.push_back('0');
        } else {
            equation.push_back('9');
        }
    }
    
    string lval = "";
    string rval = "";
    bool onR = false;
    for (char i : equation){
        if (i == '+'){
            onR = true;
            continue;
        }
        if (!onR){
            lval.push_back(i);
        } else {
            rval.push_back(i);
        }

        

        
    }
    cout << equation << endl << lval << endl << rval << endl;
    return 12334; // debug
    string sum = to_string(stoi(lval) + stoi(rval));

    string r1 = "";
    string r2 = "";
    string r3 = "";
    string r4 = "";
    string r5 = "";
    string r6 = "";
    string r7 = "";

    for (int i = 0; i < size(sum); i++){
        if (i == '0'){
        } else if (sum[i] == '1'){
            r1 += "....x";
            r2 += "....x";
            r3 += "....x";
            r4 += "....x";
            r5 += "....x";
            r6 += "....x";
            r7 += "....x";
        } else if (sum[i] == '2') {
            r1 += "xxxxx";
            r2 += "....x";
            r3 += "....x";
            r4 += "xxxxx";
            r5 += "x....";
            r6 += "x....";
            r7 += "xxxxx";
        } else if (sum[i] == '3') {
            r1 += "xxxxx";
            r2 += "....x";
            r3 += "....x";
            r4 += "xxxxx";
            r5 += "....x";
            r6 += "....x";
            r7 += "xxxxx";
        } else if (sum[i] == '4') {
            r1 += "x...x";
            r2 += "x...x";
            r3 += "x...x";
            r4 += "xxxxx";
            r5 += "....x";
            r6 += "....x";
            r7 += "....x";
        } else if (sum[i] == '5') {
            r1 += "xxxxx";
            r2 += "x....";
            r3 += "x....";
            r4 += "xxxxx";
            r5 += "....x";
            r6 += "....x";
            r7 += "xxxxx";
        } else if (sum[i] == '6') {
            r1 += "xxxxx";
            r2 += "x....";
            r3 += "x....";
            r4 += "xxxxx";
            r5 += "x...x";
            r6 += "x...x";
            r7 += "xxxxx";
        } else if (sum[i] == '7') {
            r1 += "xxxxx";
            r2 += "....x";
            r3 += "....x";
            r4 += "....x";
            r5 += "....x";
            r6 += "....x";
            r7 += "....x";
        } else if (sum[i] == '8') {
            r1 += "xxxxx";
            r2 += "x...x";
            r3 += "x...x";
            r4 += "xxxxx";
            r5 += "x...x";
            r6 += "x...x";
            r7 += "xxxxx";
        } else {
            r1 += "xxxxx";
            r2 += "x...x";
            r3 += "x...x";
            r4 += "xxxxx";
            r5 += "....x";
            r6 += "....x";
            r7 += "....x";
        }
        if (i != size(sum)-1){
            r1 += ".";
            r2 += ".";
            r3 += ".";
            r4 += ".";
            r5 += ".";
            r6 += ".";
            r7 += ".";
        }
    }    
    cout << equation << endl; // debug
    cout << r1 << "\n" << r2 << "\n" << r3 << "\n" << r4 << "\n" << r5 << "\n" << r6 << "\n" << r7 << "\n";
}
