//
// Created by nadia on 28.12.17.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>

#include "Agent.h"

Agent::Agent() { // init
    this->hp = 100;
    this->atk = 100;
    this->defence = 100;
    this->name = "This fella";
    this->condition =  name + "looks like a healthy one.";
}

Agent::Agent(std::string n) {
    this->hp = 100;
    this->atk = 100;
    this->defence = 100;
    this->name = n;
    this->condition = name + " looks like a healthy fella.";
}

//Getters
int Agent::getHp() {
    return this->hp;
}
int Agent::getAtk() {
    return this->atk;
}
int Agent::getDef() {
    return this->defence;
}
std::string Agent::getName() {
    return this->name;
}

//Setters
void Agent::setHp(int h) { //check if you can call h hp
    this->hp = h;
}
void Agent::setAtk(int a) {
    this->atk = a;
}

void Agent::setDef(int d) {
    this->defence = d;
}
void Agent::setName(std::string n) {
    this->name = n;
}

//Descriptions (couts)
void Agent::healthDesc() {
    if (this->hp != 0) {
        std::cout << this->name + " now has a health of " << this->hp << "hp." << std::endl;
    }
    else {
        std::cout << this->name + " is dead..." << std::endl;
    }
}
void Agent::nameDesc() {
    if (this->name != "This fella" && this->name != "this fella"){
        std::cout << "This is a creature named " << this->name << "." << std::endl;
    }
    else {
        std::cout << "The name of this creature is unknown.";
    }
}
void Agent::conditionDesc() {
    if (this->hp <= 0) {
        condition = this->name + " is dead...";
    }
    else if (this->hp <= 20) {
        this->healthDesc();
        condition = this->name + " is quite damaged, hang in there " + this->name + "!";
    }
    else if (this->hp <= 50) {
        this->healthDesc();
        std::string lower_name = this->name;
        std::transform(lower_name.begin(), lower_name.end(), lower_name.begin(), ::tolower);
        condition = "It seems like " + lower_name + " is somewhat exhausted.";
    }
    else {
        this->healthDesc();
        condition = this->name + " is in good condition!";
    }

    std::cout << this->condition << std::endl;
}
void Agent::generalDesc() {
    std::cout << "___________________________________" << std::endl;
    this->nameDesc();
    this->conditionDesc();
    std::cout << "___________________________________" << std::endl;
}


//Actions
void Agent::attack(Agent &oponent) {
    if (this->hp > 0) {
        std::cout << this->name + " attacked " + oponent.getName() << std::endl;
        int newhp = static_cast<int>(oponent.getHp() - this->atk*0.1);

        if (newhp < 0) {
            newhp = 0;
        }

        oponent.setHp(newhp);
        oponent.healthDesc();
    }
    else {
        std::cout << this->name + " can't attack due to being dead." << std::endl;
    }
}

void Agent::eat(std::string food) {
    if (this->hp >= 0) {
        edible["apple"] = 10;
        edible["dragonfruit"] = 20;
        edible["starfruit"] = -10;

        std::cout << this->name + " ate a " + food << std::endl;

        if (edible.find(food) == edible.end()) {
            // not found
            std::cout << "The " + food + " had no effect on " + this->name + "." << std::endl << std::endl;

        } else {
            // found
            int old_hp = this->hp;
            this->hp = this->hp + edible[food];
            std::cout << this->name + "'s health changed from " << old_hp << "hp to " << this->hp << "hp." << std::endl;
            std::cout << std::endl;
        }
    }
    else {
        std::cout << this->name + " is dead, and can therefor not eat." << std::endl;
    }
}