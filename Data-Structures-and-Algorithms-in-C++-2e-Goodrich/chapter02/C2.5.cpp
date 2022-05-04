//
// Created by Reedus on 04/05/2022.
//

#include "includes/C2.5.h"
#include <iostream>

void C2_5() {
    std::cout << std::endl << "====== C2.5 ======" << std::endl;
    Progression *p;
    p = new DiffProgression();
    std::cout << "The first sequence:\n";
    p->printProgression(20);
    delete p;

    std::cout << "The second sequence:\n";
    p = new DiffProgression(10, 300);
    p->printProgression(20);
    delete p;
}

long DiffProgression::firstValue() {
    turn = 1;
    cur = first;
    return cur;
}

long DiffProgression::nextValue() {
    ++turn;
    if (turn == 2) {
        cur = second;
    } else {
        cur = abs(second - first);
        first = second;
        second = cur;
    }
    return cur;
}
