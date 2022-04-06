#include <iostream>

// Raise 2 to power of i, method 1
long raise2poweri_1(int i){
    return 1 << i;
}

// Raise 2 to power of i, method 2
long raise2poweri_2(int i){
    long s = 2;
    long inc = 2;
    
    for(int k = 1; k < i; k++){
        for(int j = 1; j < 2; j++){
            s += inc;
        }
        inc = s;
    }
    
    return s;
}

int main(){
    int i;
    std::cout << "Input i: ";
    std::cin >> i;
    std::cout << "Raise 2 to power of i: " << raise2poweri_1(i) << std::endl;
    std::cout << "Raise 2 to power of i: " << raise2poweri_2(i) << std::endl;
}
