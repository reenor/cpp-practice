//
// Created by Reedus on 04/05/2022.
//

#include "includes/C2.6.h"
#include <iostream>
#include <cmath>

void C2_6 () {
    std::cout << std::endl << "====== C2.6 ======" << std::endl;
    Progression26 *p = new SRootProgression();
    std::cout << "The default sequence of square root:\n";
    p->printProgression(10);
    delete p;

    p = new SRootProgression(1000);
    std::cout << "The sequence of square root:\n";
    p->printProgression(10);
    delete p;
}

void Progression26::printProgression(int n) {
    std::cout << firstValue();
    for (int i = 2; i <= n; ++i)
        std::cout << ' ' << nextValue();
    std::cout << std::endl;
}

double Progression26::firstValue() {
    cur = first;
    return cur;
}

double Progression26::nextValue() {
    return ++cur;
}

double SRootProgression::nextValue() {
    cur = sqrt(cur);
    return cur;
}
