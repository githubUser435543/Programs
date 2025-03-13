#include <iostream>
#include <ostream>
#include <vector>

int main(){
    int c; std::cin >> c;
    std::vector<int> arr;
    for (int i = 0; i < c; i++){
        arr.push_back(c);
    }

    for (auto item : arr){
        std::cout << item << std::endl;
    }
}
