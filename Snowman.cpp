//
// Created by nadia on 28.12.17.
//
#include <iostream>
#include "Snowman.h"

#include <iostream>
#include <string>
#include <map>

Snowman::Snowman() {
    std::cout << "rollrollrollro..." << std::endl;
}

Snowman::Snowman(std::string n) {
    std::cout << "rollrollrollro..." << std::endl;
    this->setName(n);

}

Snowman Snowman::operator+(Snowman &obj) {
    Snowman bigsnowman;
    bigsnowman.setHp(this->getHp() + obj.getHp());
    bigsnowman.setAtk(this->getAtk() + obj.getAtk());
    bigsnowman.setDef(this->getDef() + obj.getDef());

    std::string name1 = this->getName();
    std::string name2 = obj.getName();
    std::string newname = name1.substr(0,name1.size() - 1) + name2.substr(1);
    bigsnowman.setName(newname);

    std::cout << "SNOWMAN COMBINATION COMPLETE." << std::endl;
    std::cout << "Snowman " << name1 << " combined with snowman " << name2 << "." << std::endl;
    std::cout << "New mega snowman formed called " << newname << "!" << std::endl;

    return bigsnowman;
}