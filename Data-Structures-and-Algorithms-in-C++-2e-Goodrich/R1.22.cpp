#include <iostream>

int numDivideTwo(double x){
    if (x <= 0) return 0;
    int num = 0;
    while (x > 2.0) {
        if ((x / 2.0) >= 2.0)
            num++;
        x /= 2;
    }
    return num;
}

int main(){
    double x;
    std::cout << "Input a positive double (x):";
    std::cin >> x;
    std::cout << "Number of times we divide x by 2 before we get a number less than 2: "
                << numDivideTwo(x) << std::endl;
}