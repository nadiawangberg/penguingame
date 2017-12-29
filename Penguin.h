//
// Created by nadia on 28.12.17.
//

#ifndef RPG2_PENGUIN_H
#define RPG2_PENGUIN_H

#include <iostream>
#include <string>
#include <map>

#include "Agent.h"

class Penguin: public Agent {
public:
    Penguin();
    Penguin(std::string n);

    void slideAttack(Agent &oponent);

};

#endif //RPG2_PENGUIN_H