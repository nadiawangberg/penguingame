//
// Created by nadia on 28.12.17.
//
#ifndef RPG2_SNOWMAN_H
#define RPG2_SNOWMAN_H

#include "Agent.h"

#include <iostream>
#include <string>
#include <map>


class Snowman: public Agent {
public:
    Snowman();
    Snowman(std::string n);
    Snowman operator+(Snowman &obj);
};

#endif //RPG2_SNOWMAN_H
