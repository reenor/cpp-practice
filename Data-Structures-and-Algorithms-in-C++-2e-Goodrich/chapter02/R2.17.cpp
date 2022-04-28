//
// Created by Reedus on 28/04/2022.
//

#include "includes/R2.17.h"
#include <iostream>
#include <cmath>

static bool canAdd(int a, int b, int c);
static bool canSubtract(int a, int b, int c);
static bool canDivide(int a, int b, int c);
static bool canMultiply(int a, int b, int c);
static bool canPower(int a, int b, int c);

void R2_17 () {
    std::cout << std::endl << "====== R2.17 ======" << std::endl;
    int a, b, c;
    std::cout << "Input a: ";
    std::cin >> a;
    std::cout << "Input b: ";
    std::cin >> b;
    std::cout << "Input c: ";
    std::cin >> c;

    if (canAdd(a, b, c))
        std::cout << "Can add\n";
    else if (canSubtract(a, b, c))
        std::cout << "Can subtract\n";
    else if (canDivide(a, b, c))
        std::cout << "Can divide\n";
    else if (canMultiply(a, b, c))
        std::cout << "Can multiply\n";
    else if (canPower(a, b, c))
        std::cout << "Can raise to the power\n";
    else
        std::cout << "Nothing to do with your input\n";
}

bool canAdd(int a, int b, int c) {
    if (a == b + c ||
        b == a + c ||
        c == a + b)
        return true;
    return false;
}

bool canSubtract(int a, int b, int c) {
    if (a == b - c ||
        b == a - c ||
        c == a - b)
        return true;
    return false;
}

bool canDivide(int a, int b, int c) {
    if (a == b / c ||
        b == a / c ||
        c == a / b)
        return true;
    return false;
}

bool canMultiply(int a, int b, int c) {
    if (a == b * c ||
        b == a * c ||
        c == a * b)
        return true;
    return false;
}

bool canPower(int a, int b, int c) {
    if (long(a) == std::pow(long(b), long(c)) ||
            long(b) == std::pow(long(a), long(c)) ||
            long(c) == std::pow(long(a), long(b)))
        return true;
    return false;
}
