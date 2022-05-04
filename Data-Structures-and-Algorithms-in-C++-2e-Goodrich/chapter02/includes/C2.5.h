//
// Created by Reedus on 04/05/2022.
//

#ifndef CHAPTER02_C2_5_H
#define CHAPTER02_C2_5_H

#include "R2.8-2.10.h"

class DiffProgression : public Progression {
public:
    DiffProgression() : Progression(2), second(200) {};
    DiffProgression(long f, long s) : Progression(f), second(s) {};
protected:
    virtual long firstValue();
    virtual long nextValue();
protected:
    long second;
    long turn;
};

void C2_5();

#endif //CHAPTER02_C2_5_H
