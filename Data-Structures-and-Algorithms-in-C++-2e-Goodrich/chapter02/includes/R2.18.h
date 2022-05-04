//
// Created by Reedus on 28/04/2022.
//

#ifndef CHAPTER02_R2_18_H
#define CHAPTER02_R2_18_H

template <class F, class S>
class Pair {
public:
    Pair(F f, S s) : first(f), second(s) {} // Constructor
    F getFirst() const;    // Function prototype of getter
    S getSecond() const;   // Function prototype of getter
private:
    F first;
    S second;
};

template <class F, class S>
F Pair<F, S>::getFirst() const {
    return first;
}

template <class F, class S>
S Pair<F, S>::getSecond() const {
    return second;
}

void R2_18 ();

#endif //CHAPTER02_R2_18_H
