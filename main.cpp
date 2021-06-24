#include <iostream>
#include "zoo.h"
#include "aigle.h"
#include "poule.h"
#include "tigre.h"
#include "game.h"

using namespace std;

int main()
{
    Zoo zoo("Zoo de la Montagne");
    Game game;
    int temps = 0;
    zoo.addAnimal(new Tigre("Tigre", 6));
    zoo.addAnimal(new Tigre("Tigre", 6));
    zoo.addAnimal(new Tigre("Tigre", 6));
    zoo.addAnimal(new Tigre("Tigre", 6));
    zoo.addAnimal(new Aigle("Aigle", 6));
    zoo.addAnimal(new Aigle("Aigle", 6));
    zoo.addAnimal(new Aigle("Aigle", 6));
    zoo.addAnimal(new Aigle("Aigle", 6));
    while (temps != 120) {
        int input = game.gameStart();
        if (input == 1) {
            zoo = game.buyAnimal(zoo);
        }
        if (input == 3) {
            zoo.printAnimals();
        }
        temps++;
    }
     
    // if (input == 2) {
    //     game.sellAnimal(zoo);
    // }


    return 0;
}
