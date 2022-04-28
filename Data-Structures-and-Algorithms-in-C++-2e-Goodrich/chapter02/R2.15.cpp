//
// Created by Reedus on 28/04/2022.
//

#include "includes/R2.15.h"
#include <string>
#include <array>
#include <iostream>

void R2_15 () {
    std::cout << std::endl << "====== R2.15 ======" << std::endl;
    std::string str;
    std::array<char, sizeof("aeiou")> vowels = {"aeiou"};
    int cnt = 0;

    std::cout << "Input your string: ";
    // cin considers a space (whitespace, tab, etc) as a terminating character
    // std::cin >> str
    // That's why we use the getline() function to read a line of text
    getline(std::cin, str);
    for (const auto ch : vowels) {
        std::size_t found = 0;
        do {
            found = str.find(ch, found);
            if (found != std::string::npos) { // Found the ch in the string
                ++cnt;
                ++found;
            }
        } while (found != std::string::npos);
    }
    std::cout << "The number of vowels in the string: " << cnt << std::endl;
}