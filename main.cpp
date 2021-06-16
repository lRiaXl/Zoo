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
    int input = game.gameStart();
    // if (input == 1) {
    // //     if (money )
    // // }
    // cout << money << endl;

    game.buyAnimal(zoo);
    

    return 0;
}
