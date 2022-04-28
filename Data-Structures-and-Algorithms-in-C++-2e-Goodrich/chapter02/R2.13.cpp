//
// Created by Reedus on 28/04/2022.
//

#include "includes/R2.13.h"
#include <iostream>
#include <array>

static void R2_13_outOfBound();

void R2_13 () {
    R2_13_outOfBound();
}

static void R2_13_outOfBound() {
    std::cout << std::endl << "====== R2.13 ======" << std::endl;
    // Accessing out of bounds a C-style array is Undefined Behavior
//    int a[10];
//    try {
//        a[15] = 30;
//    }
//    catch (std::out_of_range& e) {
//        std::cout << "Out of range exception " << e.what() << std::endl;
//    }
//    catch (...) {
//        std::cout << "Default exception" << std::endl;
//    }

    // Accessing out of Bounds std::array
    std::array<std::string, 2> astr = {"aaaa", "bbbb"};
    std::cout << "Size of array of string: " << astr.size() << std::endl;
    std::cout << "Now attempt to access the 3rd element in this array" << std::endl;
    try {
        astr.at(2) = "cccc";
    }
    catch (std::out_of_range& e) {
        // https://people.scs.carleton.ca/~dehne/projects/cpp-doc/tutorial/tut5-3.html
        std::cout << "Out of range exception: " << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "Default exception" << std::endl;
    }
}
