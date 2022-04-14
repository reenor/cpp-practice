#include <iostream>

// compute Greatest Common Divisor using Euclidean Alogrithm, method 1
unsigned int gcd_1(unsigned int n, unsigned int m){
    unsigned int tmp;
    while(n % m){
        tmp = m;
        m = n % m;
        n = tmp;
    }
    return m;
}

// method 2
unsigned int gcd_2(unsigned int n, unsigned int m){
    if (!(n % m))
        return m;
    return gcd_2(m, n % m);
}

int main(){
    unsigned int n, m;
    std::cout << "Input m and n (m > n > 0): ";
    std::cin >> n >> m;
    std::cout << "The GCD of n and m is: " << gcd_1(n, m) << std::endl;
    std::cout << "The GCD of n and m is (method 2): " << gcd_2(n, m) << std::endl;
}