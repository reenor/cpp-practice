#include "includes/R2.8-2.10.h"
#include <iostream>

void Progression::printProgression(int n){
    std::cout << std::endl << firstValue();
    for(int i = 2; i <= n; i++)
        std::cout << ' ' << nextValue();
    std::cout << std::endl;
}

long Progression::firstValue(){
    cur = first;
    return cur;
}

long Progression::nextValue(){
    return ++cur;
}

long ArithProgression::nextValue(){
    cur += inc;
    return cur;
}

long GeomProgression::nextValue(){
    cur *= base;
    return cur;
}

FibonacciProgression::FibonacciProgression(long f, long s)
    : Progression(f), second(s), turn(0) {}

long FibonacciProgression::firstValue(){
    ++turn;
    cur = first;
    return cur;
}

long FibonacciProgression::nextValue(){
    ++turn;
    if (turn == 2) {
        cur = second;
    }
    else {
        cur = first + second;
        first = second;
        second = cur;
    }
    return cur;
}