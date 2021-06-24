#ifndef GAME_H
#define GAME_H

#include "ianimal.h"
#include "aigle.h"
#include "poule.h"
#include "tigre.h"
#include "zoo.h"

#include <string>
#include <iostream>

using namespace std;

class Game
{
    bool game;
    int input;

public:
    
    Game();
    int gameStart();
    Zoo buyAnimal(Zoo zoo);
    // void sellAnimal(Zoo zoo);
};

#endif // GAME_H
