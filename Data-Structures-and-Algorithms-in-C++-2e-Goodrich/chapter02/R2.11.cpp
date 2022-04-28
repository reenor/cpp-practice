//
// Created by Reedus on 28/04/2022.
//

#include "includes/R2.11.h"
#include <iostream>

void R2_11() {
    std::cout << std::endl << "====== R2.11 ======" << std::endl;
    // The 1st method
    Equestrian e;
    Horse *h = dynamic_cast<Horse*>(&e); // Upcasting is always successful
    Racer *r = dynamic_cast<Racer*>(h); // This code should be compiled successful, but at runtime, this cast fails
    // and returns null pointer
    if (r == nullptr)
        std::cout << "Pointer is NULL. This means it is unsafe to use this pointer." << std::endl;

    // The 2nd method
    Horse *hh = new Equestrian; // Upcasting is always successful
    Racer *rr = dynamic_cast<Racer*>(hh); // This code should be complied successful, but at runtime, this cast fails
    // and returns null pointer
    if (rr == nullptr)
        std::cout << "Pointer is NULL. This means it is unsafe to use this pointer." << std::endl;
    delete hh;
}