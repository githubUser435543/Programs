#include <bits/stdc++.h>
#include <pthread.h>
#include <string>
#include <vector>
using namespace std;

int main(){
    int c; cin >> c;
    while (c--){
        string name;
        string runs;
        string buf; cin >> buf;
        bool colonPassed = false;
        for (auto ch: buf){
            if(not colonPassed and ch != ':'){name += ch;}
            else if(colonPassed){runs += ch;}
            else {
                colonPassed = true;
            }
        }

        vector<char> runsArr;
        for (int i = 0; i < size(runs); i++){
            if (i == 0){
                runsArr.push_back(runs[0]);
            } else if (runs[i-1] == ','){
                runsArr.push_back(runs[i]);
            }
        }

        double ks = 0;
        double ones = 0;
        double twos = 0;
        double threes = 0;
        double HRs = 0;

        for (char ch : runsArr){
            if (ch == 'K'){ks++;}
            else if (ch == '1'){ones++;}
            else if (ch == '2'){twos++;}
            else if (ch == '3'){threes++;}
            else if (ch == 'H') { HRs++;}
        }
        double slg = ((ones) + (2 * twos) + (3 * threes) + (4 * HRs)) / (ks + ones + twos + threes + HRs);
        slg = round(slg * 1000.0) / 1000.0;
        cout << name << "=";
        printf("%.3f\n", slg);

        //cout << ks << " " << ones << " " << twos << " " << threes << " " << HRs << endl; // debug

    }
}
