//
// Created by Reedus on 04/05/2022.
//

#ifndef CHAPTER02_C2_6_H
#define CHAPTER02_C2_6_H

class Progression26 {
public:
    Progression26(double f = 0) : first(f), cur(f) {}
    virtual ~Progression26() {};
    void printProgression(int n);
protected:
    virtual double firstValue(); // reset the current value
    virtual double nextValue();
protected:
    double first;
    double cur;
};

class SRootProgression : public Progression26 {
public:
    SRootProgression() : Progression26(65536) {}
    SRootProgression(double f) : Progression26(f) {}
protected:
    virtual double nextValue();
};

void C2_6 ();

#endif //CHAPTER02_C2_6_H
