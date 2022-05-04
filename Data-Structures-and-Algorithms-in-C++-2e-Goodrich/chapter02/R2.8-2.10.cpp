#include "includes/R2.8-2.10.h"
#include <iostream>

void R2_8_10() {
    std::cout << std::endl << "====== R2.8 ======" << std::endl;
    Progression *p;
    long n = 7;

    p = new FibonacciProgression(3, 4);
    p->printProgression(n);
    delete p;

    std::cout << std::endl << "====== R2.9 ======" << std::endl;
    int inc = 128;
    std::cout << INT64_MAX / inc << std::endl;

    std::cout << std::endl << "====== R2.10 ======" << std::endl;
    Progression *p1, *p2;

    p1 = new GeomProgression;
    // Cast p1 to a pointer of type Progression. This is upcasting and it's always successful.
    p2 = dynamic_cast<Progression*>(p1);
    if (p2 != nullptr)
        std::cout << "Pointer is NOT NULL. This means it is SAFE to use this pointer." << std::endl;
    // unable to call p2->firstValue() because this method is a protected member of Progression.
//        p2->firstValue();
}

void Progression::printProgression(int n){
    std::cout << firstValue();
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
    turn = 1;
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