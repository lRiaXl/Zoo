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
    int money = 20000;

public:
    Money();
    bool buyAnimal(int animal, int age);
    // bool sellAnimal(int animal, int age);
};





#endif