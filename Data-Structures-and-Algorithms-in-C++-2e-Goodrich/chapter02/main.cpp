#include <iostream>
#include "includes/R2.8-2.10.h"

int main() {
    {
        // R2.8
        Progression *p;
        long n = 7;

        p = new FibonacciProgression(3,4);
        p->printProgression(n);
        delete p;
    }

    {
        // R2.9
        int inc = 128;
        std::cout << std::endl << INT64_MAX / inc << std::endl;
    }

    { // R2.10
        Progression *p;
        Progression *p2;
        GeomProgression *p3;

        p = new GeomProgression();

        // Cast p to a pointer of type Progression? Don't need this because p is the Progression type already!
        p2 = dynamic_cast<Progression*>(p);
        // unable to call p2->firstValue() because this method is a protected member of Progression.

        // Cast p to a pointer of type GeomProgression
        p3 = dynamic_cast<GeomProgression*>(p);
        // unable to call p3->firstValue() because this method is not a member of GeomProgression.
    }
    return 0;
}
