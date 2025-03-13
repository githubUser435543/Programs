#include <bits/stdc++.h>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

int main(){
    int numCars; cin >> numCars;

    vector<int> cars;
    for (int i = 1; i <= numCars; i++){
        cars.push_back(i);
    }

    vector<unordered_set<int>> passedCars(numCars);

    vector<int> finalPosition;
    for (int i = 0; i < numCars; i++){
        int car; cin >> car;
        finalPosition.push_back(car);
    }

    while (cars != finalPosition){
        int i = 0;
        int j = 1;

        if (passedCars[j].find(i)){
            swap(cars[i], cars[j]);
        }
    }
    return 0;
}


