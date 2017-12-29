//
// Created by nadia on 28.12.17.
//

#ifndef RPG2_AGENT_H
#define RPG2_AGENT_H

#include <iostream>
#include <string>
#include <map>

class Agent {

private:
    std::string name;
    int hp;
    int atk;
    int defence;
    std::string condition;

public:
    Agent();
    Agent(std::string n);

    int getHp();
    int getAtk();
    int getDef();
    std::string getName();
    std::map <std::string, int> edible;


    void setHp(int h);
    void setAtk(int a);
    void setDef(int d);
    void setName(std::string n);

    void nameDesc();
    void conditionDesc();
    void healthDesc();
    void generalDesc();

    void attack(Agent &oponent);
    void eat(std::string food);
    //void Attack(Agent &obj);
};


#endif //RPG2_AGENT_H