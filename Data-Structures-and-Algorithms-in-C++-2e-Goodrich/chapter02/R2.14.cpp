//
// Created by Reedus on 28/04/2022.
//

#include "includes/R2.14.h"

void R2_14 () {
    std::cout << std::endl << "====== R2.14 ======" << std::endl;
    Region *mid = new State;
    State *md = new Maryland;
    Object14 *obj = new Place;
    Place *usa = new Region;
    md->printMe(); // invoke Maryland::printMe() --> Read it
    mid->printMe(); // invoke State::printMe() --> Ship it
    (dynamic_cast<Place*>(obj))->printMe(); // casting is allowed, invoke Place::printMe() --> Buy it
    obj = md;
    (dynamic_cast<Maryland*>(obj))->printMe(); // casting is allowed, invoke Maryland::printMe() --> Read it
    obj = usa;
    (dynamic_cast<Place*>(obj))->printMe(); // casting from Region to Place (upcasting) is allowed,
                                            // invoke Region::printMe() --> Box it
    usa = md;
    (dynamic_cast<Place*>(usa))->printMe(); // casting from Maryland to Place (upcasting) is allowed,
                                            // invoke Maryland::printMe() --> Read it
}
