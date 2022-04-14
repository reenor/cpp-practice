#include <iostream>
#include <vector>

void printOdd(const std::vector<int> &v){
    for(auto itr : v)
        if ((itr % 2) == 1)
            std::cout << itr << std::endl;
}

int main(){
    std::vector<int> v = {1, 2, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Odd numbers are:" << std::endl;
    printOdd(v);
}