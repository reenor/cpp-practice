//
// Created by Reedus on 04/05/2022.
//

#ifndef CHAPTER02_C2_4_H
#define CHAPTER02_C2_4_H

class Line {
public:
    Line(double a, double b) : a(a), b(b) {};
    double intersect(const Line& l);
private:
    double a;
    double b;
};

void C2_4();

#endif //CHAPTER02_C2_4_H
