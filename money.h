#ifndef MONEY_H
#define MONEY_H

#include "ianimal.h"
#include "aigle.h"
#include "poule.h"
#include "tigre.h"
#include "zoo.h"

#include <string>
#include <iostream>

using namespace std;

class Money
{
    int money = 3000;

public:
    Money();
    bool buyAnimal(string animal);
};





#endif