//
// Created by Reedus on 04/05/2022.
//

#include "includes/C2.4.h"
#include <iostream>

void C2_4() {
    std::cout << std::endl << "====== C2.4 ======" << std::endl;
    Line l1(3,-3);
    Line l2(2.3, 4);
    Line l3(3, 8);
    Line l4(3, -3);
    double x;

    if ((x = l1.intersect(l2)) == double(500))
        std::cout << "Line l1 and l2 are coincident\n";
    else if (x == double(501))
        std::cout << "Line l1 and l2 are parallel\n";
    else
        std::cout << "Intersection point of line l1 and l2 is (" << x << ",?)\n";

    if ((x = l1.intersect(l3)) == double(500))
        std::cout << "Line l1 and l3 are coincident\n";
    else if (x == double(501))
        std::cout << "Line l1 and l3 are parallel\n";
    else
        std::cout << "Intersection point of line l1 and l3 is (" << x << ",?)\n";

    if ((x = l1.intersect(l4)) == double(500))
        std::cout << "Line l1 and l4 are coincident\n";
    else if (x == double(501))
        std::cout << "Line l1 and l4 are parallel\n";
    else
        std::cout << "Intersection point of line l1 and l4 is (" << x << ",?)\n";
}

double Line::intersect(const Line& l) {
    try {
        if (a == l.a && b == l.b) { // Two lines are coincident
            throw 500;
        }
        if (a == l.a) { // https://www.mathopenref.com/coordparallel.html
            throw 501; // Two lines are parallel
        }
    } catch (int err) {
        return err;
    }
    return (b - l.b) / (l.a - a); // https://www.mathopenref.com/coordintersection.html
}