#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases; cin >> cases;

    for (int i = 0; i < cases; i++){
        string input; cin >> input;
        string speedBuf;
        string distanceBuf;
        float speed;
        float distance;

        for (int j = 0; j < size(input); j++){
            if (input[j] != ":"){
                
            }
        }

       int time = distance / speed;
       if (time <= 1){
            cout << "SWERVE\n";
       } else if (time <= 5){
            cout << "BRAKE\n";
       } else {
            cout << "SAFE\n";
       }
    }
    return 0;
}
