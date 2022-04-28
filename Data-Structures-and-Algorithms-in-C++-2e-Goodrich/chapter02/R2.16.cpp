//
// Created by Reedus on 28/04/2022.
//

#include "includes/R2.16.h"
#include <iostream>
#include <string>
#include <array>

void R2_16 () {
    std::cout << std::endl << "====== R2.16 ======" << std::endl;
    std::array<char, sizeof(".,?!:;'-{}`()\"")> punctuationMarks = {".,?!:;'-{}`()\""};
    std::string str;

    std::cout << "Input the string: ";
    getline(std::cin, str);
    for (const auto ch : punctuationMarks) {
        std::size_t found = 0;
        do {
            found = str.find(ch, found);
            if (found != std::string::npos) { // Found one punctuation mark in the input
                 str.erase(found, 1);
            }
        } while (found != std::string::npos);
    }
    std::cout << "The string after removing all punctuation marks:\n\t" << str;
}
