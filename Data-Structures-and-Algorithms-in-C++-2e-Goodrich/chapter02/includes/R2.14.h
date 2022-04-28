//
// Created by Reedus on 28/04/2022.
//

#ifndef CHAPTER02_R2_14_H
#define CHAPTER02_R2_14_H

#include <iostream>

class Object14 {
public:
    virtual void printMe() = 0; // "= 0" makes this class become an abstract class
                                // It is NOT possible to create objects of this class, only its subclasses
};

class Place : public Object14 {
public:
    virtual void printMe() { std::cout << "Buy it.\n"; };
};

class Region : public Place {
public:
    virtual void printMe() { std::cout << "Box it.\n"; };
};

class State : public Region {
public:
    virtual void printMe() { std::cout << "Ship it.\n"; };
};

class Maryland : public State {
public:
    virtual void printMe() { std::cout << "Read it.\n"; };
};

void R2_14 ();

#endif //CHAPTER02_R2_14_H
