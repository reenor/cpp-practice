//
// Created by Reedus on 27/04/2022.
//

#ifndef CHAPTER02_R2_11_H
#define CHAPTER02_R2_11_H

class Object11 {
public:
    Object11(){};
};

class Goat: public Object11 {
public:
    Goat(){};
    void milk(){};
    void jump(){};
private:
    long tail;
};

class Pig : public Object11 {
public:
    Pig(){};
    void eat();
    void wallow();
private:
    long nose;
};

class Horse : public Object11 {
public:
    Horse(){};
    // A class is polymorphic only if there is at least one virtual method.
    // Downcasting with dynamic_cast is not allowed unless the base class is polymorphic.
    virtual ~Horse(){};
    void run();
    void jump();
private:
    long height;
    long color;
};

class Racer : public Horse {
public:
    Racer(){};
    void race();
};

class Equestrian : public Horse {
public:
    Equestrian(){};
    void trot();
    bool isTrained();
private:
    long weight;
};

void R2_11();

#endif //CHAPTER02_R2_11_H
