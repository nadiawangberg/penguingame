//
// Created by nadia on 28.12.17.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <ctime>

#include "Penguin.h"

Penguin::Penguin() { // init
    std::cout << "Noot Noot!" << std::endl;
    this->setAtk(150);
    this->setName("A penguin");
}

Penguin::Penguin(std::string n) { // init
    std::cout << "Noot Noot!" << std::endl;
    this->setAtk(150);
    this->setName(n);
}

void Penguin::slideAttack(Agent &oponent) {
    if (this->getHp() > 0) {
        std::cout << this->getName() + " slid towards " + oponent.getName() << std::endl;
        int newhp = static_cast<int>(oponent.getHp() - this->getAtk() * 0.2);

        if (newhp < 0) {
            newhp = 0;
        }

        srand(time(NULL));
        int rnd = (rand() % 10) + 1;

        if (rnd >= 4) {
            std::cout << "The slide attack hit!" << std::endl;

            oponent.setHp(newhp);
            oponent.healthDesc();
        } else {
            std::cout << "The slide attack missed!" << std::endl;
        }
    }
    else {
        std::cout << this->getName() + " can't attack due to being dead." << std::endl;
    }
}