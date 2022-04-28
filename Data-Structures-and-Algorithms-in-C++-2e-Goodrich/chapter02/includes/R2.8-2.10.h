//
// Created by Reedus on 27/04/2022.
//

#ifndef CHAPTER02_R2_8_2_10_H
#define CHAPTER02_R2_8_2_10_H

class Progression {
public:
    Progression(long f = 0) : first(f), cur(f) {}
    virtual ~Progression() {};
    void printProgression(int n);
protected:
    virtual long firstValue(); // reset the current value
    virtual long nextValue();
protected:
    long first;
    long cur;
};

class ArithProgression: public Progression {
public:
    ArithProgression(long i = 1) : Progression(), inc(i) {}
protected:
    virtual long nextValue();
protected:
    long inc;
};

class GeomProgression: public Progression {
public:
    GeomProgression(long b = 2) : Progression(1), base(b) {}
protected:
    virtual long nextValue();
protected:
    long base;
};

class FibonacciProgression: public Progression{
public:
    FibonacciProgression(long f = 0, long s = 1);
protected:
    virtual long firstValue();
    virtual long nextValue();
protected:
    long second;
    long turn;
};

void R2_8_10();

#endif //CHAPTER02_R2_8_2_10_H
