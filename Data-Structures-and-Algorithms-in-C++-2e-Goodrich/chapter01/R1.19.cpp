#include <iostream>

bool isTwoPower(int i){
    return !(i & (i - 1));
}

int main(){
    int n;
    std::cout << "Input an integer: ";
    std::cin >> n;

    std::cout << n;
    if (isTwoPower(n))
        std::cout << " is a power of 2";
    else
        std::cout << " is NOT a power of 2";

    std::cout << std::endl;
}