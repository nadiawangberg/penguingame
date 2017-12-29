#include <iostream>
#include <string>
#include <map>

#include "Agent.h"
#include "Penguin.h"
#include "Snowman.h"

int main()
{
    //Agent hamtaro = Agent("Hamtaro");
    //Agent pikachu = Agent("Pika");
    //Penguin pingu = Penguin("Pingu");
    Snowman snowy = Snowman("Snowy");
    snowy.generalDesc();

    Snowman icy = Snowman("Icy");
    icy.generalDesc();

    Snowman frosty = Snowman("Frosty");

    Snowman comboman = snowy + icy + frosty;
    comboman.generalDesc();


    return 0;
}