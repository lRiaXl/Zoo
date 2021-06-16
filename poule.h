#ifndef POULE_H
#define POULE_H
#include <string>
#include "ianimal.h"

using namespace std;


class Poule:public IAnimal
{
    int pouleCount = 1;
public:
    Poule();
    Poule(string name);
};

#endif // POULE_H
