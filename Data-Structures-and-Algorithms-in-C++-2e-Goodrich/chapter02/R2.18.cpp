//
// Created by Reedus on 28/04/2022.
//

#include "includes/R2.18.h"
#include <iostream>

void R2_18 () {
    std::cout << std::endl << "====== R2.18 ======" << std::endl;
    Pair<int, std::string> pair_1(10, "Template demonstration");
    Pair<int, float> pair_2(20, 5.4);
    Pair<int, double> pair_3(30, 5.4444444444444444444444444444444444);
    Pair<std::string, float> pair_4("Demonstrate class templates", 6.4);
    Pair<float, double> pair_5(7.4, 6.44444444444444444444444444444444444);

    std::cout << "Pair 1: " << pair_1.getFirst() << "\t" << pair_1.getSecond();
    std::cout << "\nPair 2: " << pair_2.getFirst() << "\t" << pair_2.getSecond();
    std::cout << "\nPair 3: " << pair_3.getFirst() << "\t" << pair_3.getSecond();
    std::cout << "\nPair 4: " << pair_4.getFirst() << "\t" << pair_4.getSecond();
    std::cout << "\nPair 5: " << pair_5.getFirst() << "\t" << pair_5.getSecond();
}
